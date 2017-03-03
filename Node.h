#ifndef NODE_H
#define NODE_H

#include <iostream>
//node class header
class Node{
 public:
  Node* getNext();
  Node(char d);
  Node(int d);
  int getIntData();
  char getCharData();
  int getType();
  void setNext(Node* n);
 private:
  Node* next;
  union data_t{
    char c;
    int i;
  } data;
  int type;

};

#endif
