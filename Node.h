#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>

class Node{
 public:
  getOp();
  setOp();
  getNext();

  Node();
  ~Node();
 private:
  Node* next;
  char op;
  
};

#endif
