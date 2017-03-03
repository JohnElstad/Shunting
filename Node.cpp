#include <iostream>
#include "Node.h"
//holds the link to the next node as well as either a char or int

using namespace std;
//Nodes class that stores 
Node::Node(char d){
  next = NULL;
  data.c = d;
  type = 1;

}
Node::Node(int d){
  next = NULL;
  data.i = d;
  type = 2;

}

void Node::setNext(Node* n){
  next = n;
}
//returns the next node
Node* Node::getNext(){
  return next;
}
int Node::getIntData(){
  return data.i;
}
char Node::getCharData(){
  if(type==1){
    return data.c;
  }
  else return 0;
}
