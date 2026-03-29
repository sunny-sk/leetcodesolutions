#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Stack
{
private:
  int top;
  int size;
  char *s;

public:
  Stack(int capacity)
  {
    top = -1;
    size = capacity;
    s = new char[capacity];
  }
  void push(char x);
  int pop();
  void display();
  bool isEmpty();
  bool isFull();
  char stackTop();
};
void Stack::push(char x)
{
  if (top == size - 1)
  {
    cout << "Stack is full" << endl;
    return;
  }
  top++;
  s[top] = x;
}
char Stack::stackTop()
{
  if (top == -1)
  {
    return '\0';
  }
  return s[top];
}

int Stack::pop()
{
  if (top == -1)
  {
    return -1;
  }
  int x = s[top];
  top--;
  return x;
}

void Stack::display()
{
  for (int i = 0; i <= top; i++)
  {
    cout << s[i] << " ";
  }
  cout << endl;
}

bool Stack::isEmpty()
{
  return top == -1;
}
bool Stack::isFull()
{
  return top == size - 1;
}

bool isBalance(Stack *st1, string str)
{
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '(')
    {
      st1->push(str[i]);
    }
    else if (str[i] == ')')
    {
      if (st1->isEmpty())
      {
        return false;
      }
      else
      {
        st1->pop();
      }
    }
  }
  return st1->isEmpty();
}

bool isOperand(char x){
  if (x == '+' || x == '-' || x == '*' || x == '/')
  {
    return false;
  }
  return true;
}

int prec(char x){
  if(x == '+' || x == '-'){
    return 1;
  }else if(x == '*' || x == '/'){
    return 2;
  } else {
  return 0;
  }
}

string convert(string infix, Stack *st){
  int i = 0, j = 0;
  string postfix = "";
  while (i <= infix.length() - 1)
  {
    
    if (isOperand(infix[i]))
    {
      postfix += infix[i];
      i++;
    }
    else
    {
      if(prec(infix[i]) > prec(st->stackTop())){
        st->push(infix[i]);
        i++;
      }else {
        postfix += st->pop();
      }
    }
  }

  while (!st->isEmpty()){
     postfix += st->pop();
  }

  return postfix;
}

int main()
{
  Stack st(10);
  // bool result = isBalance(&st, "((a+b)*(a+b))");
  // if (result)
  // {
  //   cout << "string is balanced";
  // }
  // else
  // {
  //   cout << "string is not balanced";
  // }

  // convert infix to posfix
  string infix = "a+b*c-d/e";
  Stack st1(infix.length());
  string c = convert(infix, &st1);
  cout << c;
  return 0;
}