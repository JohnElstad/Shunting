#include "Node.h"

using namespace std;
//stack class header file
class Stack{
 public:
  Stack();
  Node* pop();
  Node* peek();
  void push(Node* newNode);
  ~Stack();
 private:
  Node* head;

};
