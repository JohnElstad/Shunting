#include "Node.h"
using namespace std;

Node::Node(){//constructor

}
Node::~Node(){//deconstructor
  delete next();
}
char Node::getOp(){//gets operator
  return op;
}
Node::setOp(char tempOp){//sets operator
  op=tempOp;
}
Node* Node::getNext(){//gets next node
  return next;
}
Node::setNext(){//sets next node

}
