#include "Stack.h"

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
    throw 1;
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
  return true;
}

int Stack::min() {
  CNode *buf = top;

  if (top != 0) {
    int Elmin = top->data;
    buf = buf->next;
    while (buf != 0) {
      if (buf->data < Elmin)
      Elmin = buf->data;
      buf = buf->next;
    }
    return Elmin;
  } else {
    throw 2;
  }
}
