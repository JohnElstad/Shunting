#include <iostream>
#include "Node.h"

using namespace std;

int main(){
  cout<<"WELCOME TO THE SHUNTING YARD"<<endl;
  cout<<"Input an mathematical expression in infix notation"<<endl;
  char input[100];
  cin.get(input,100);
  cin.ignore();

  for(int i; input[i]!= '\0'; i++){
    if(input[i]==' '){
      i++;
    }
    
  }
}
