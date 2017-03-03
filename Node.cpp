#include "Node.h"
using namespace std;

Node::Node(){//constructor

}
Node::~Node(){//deconstructor
  
}
void Node::push(){//puts onto stack
  
}
void Node::pop(){//takes off of stack
  
}
char Node::peek(){//looks at top of stack
  return op;
}
void Node::setNext(Node* temp){
  next = temp;
}
Node* Node::getNext(){
  return next();
}
