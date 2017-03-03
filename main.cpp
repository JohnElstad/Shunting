
#include<cstdlib>
#include<cstring>
#include<iostream>
#include "Node.h"
#include "Stack.h"

using namespace std;
//John Elstad, Infix to Postfix translator, I think its March?
bool isOperator(char c);
int precedence(char c);
Stack* shuntingAlgorithm(char* input);

int main(){
  char input[100];
  cin.get(input, 100);
  shuntingAlgorithm(input);
}
//actual algorithm that sorts out the infix into postfix
Stack* shuntingAlgorithm(char* input){
  int i = 0;
  Stack* operatorStack = new Stack();
  Stack* outputStack = new Stack();
  while(input[i]){//initializes the runthrough of the string
    if(isdigit(input[i])){//if its a number, the number is added to the output stack
      outputStack->push(new Node(atoi(&input[i])));
      cout<<outputStack->peek()->getIntData()<<" ";
      while(isdigit(input[i+1])){
	i++;
      }
    }
    else if(isOperator(input[i])){//if its a normal operator
      while(operatorStack->peek()){//goes through operator stack
	if(precedence(input[i])>= precedence(operatorStack->peek()->getCharData())){
	  break;//checks the precedence. main part of shunting yard algorithm
	}
	outputStack->push(operatorStack->pop());
	cout<<outputStack->peek()->getCharData()<<" ";
      }
      operatorStack->push(new Node(input[i]));
    }
    else if (input[i] == '('){//checks if its a ( and adds to stack and the adds all operators until the close
      operatorStack->push(new Node(input[i]));
    }
    else if (input[i] == ')'){//deals with when its a closed parenthesis )
      while(operatorStack->peek()->getCharData() != '('){
	outputStack->push(operatorStack->pop());
	cout<<outputStack->peek()->getCharData() << " ";
      }
      delete operatorStack->pop();
    }
    i++;
  }
  while(operatorStack->peek()){//puts the operators onto the output stack
    outputStack->push(operatorStack->pop());
    cout<< outputStack->peek()->getCharData() <<" ";

  }
  cout<<endl;
  delete operatorStack;
  return outputStack;
}

bool isOperator(char c){
  if(c == '-'|| c=='+'||c=='*'||c=='/'||c=='^'){
    return true;
  }
  else{
    return false;
  }
}

int precedence(char c){//sets the precedence of the specific operations. this is what does PEMDAS
  int precedence[256];
  precedence['-'] = 1;
  precedence['+'] = 1;
  precedence['*'] = 2;
  precedence['/'] = 2;
  precedence['^'] = 3;
  precedence['('] = -1;
  return precedence[c];
};
