#include <iostream>

using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

class Stack
{
private:
  Node *top;

public:
  Stack() { top = NULL; }
  void push(int x);
  int pop();
  ~Stack();
  void display();
  bool isEmpty();
};

void Stack::push(int x)
{
  Node *t = new Node;
  if (t == NULL)
  {
    cout << " stack is full" << endl;
  }
  else
  {
    t->data = x;
    t->next = top;
    top = t;
  }
}
int Stack::pop()
{
  Node *t = top;
  if (top == NULL)
  {
    cout << " stack is empty" << endl;
  }
  else
  {
    int x = t->data;
    top = top->next;
    return x;
  }
  return -1;
}

void Stack::display()
{
  Node *head = top;
  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  }
}

bool Stack::isEmpty()
{
  if(!top)
    return true;
  return false;
}

Stack::~Stack(){
  
}

int main()
{
  Stack s;
  s.push(10);
  s.push(12);
  s.push(3);
  s.display();

  cout << endl << s.pop() << endl;
  s.display();
  cout << endl << s.isEmpty() << endl;
  return 0;
}