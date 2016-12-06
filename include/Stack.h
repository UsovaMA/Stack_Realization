#ifndef INCLUDE_STACK_H_
#define INCLUDE_STACK_H_

struct CNode {
  int data;
  CNode* next;
};

class Stack {
  CNode* top;
  CNode* List_of_min;
 public:
  Stack() {
    top = 0;
    List_of_min = 0;
  }
  ~Stack();
  int& gettop();   // вернуть элемент на вершине стека
  bool pop();      // удалить элемент на вершине стека
  bool push(int);  // добавить элемент на вершину стека
  int min();       // вернуть минимальный элемент в стеке
};

#endif  // INCLUDE_STACK_H_
