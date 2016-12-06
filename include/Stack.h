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
  int& gettop();   // ������� ������� �� ������� �����
  bool pop();      // ������� ������� �� ������� �����
  bool push(int);  // �������� ������� �� ������� �����
  int min();       // ������� ����������� ������� � �����
};

#endif  // INCLUDE_STACK_H_
