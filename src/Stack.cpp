#include "Stack.h"
#include <stdexcept>

Stack::~Stack() {
  while (top != 0) {
    CNode* buf = top->next;
    delete top;
    top = buf;
  }
}

int& Stack::gettop() {
  if (top != 0)
    return top->data;
  else
    throw std::logic_error("Stack is empty\n");
}

bool Stack::pop() {
  if (top != 0) {
    CNode *s = top;
    top = top->next;
    delete s;
    return true;
  } else {
    return false;
  }
}

bool Stack::push(int x) {
  CNode* node = new CNode;
  node->data = x;
  node->next = top;
  top = node;

  if (List_of_min != 0) {
    if (List_of_min->data >= x) {
      node = new CNode;
      node->data = x;
      node->next = List_of_min;
      List_of_min = node;
    }
  } else {
    node = new CNode;
    node->data = x;
    node->next = List_of_min;
    List_of_min = node;
  }
  return true;
}

int Stack::min() {
  CNode *buf = top;

  if (top != 0) {
    return List_of_min->data;
  } else {
    throw std::logic_error("Stack is empty\n");
  }
}
