#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

struct Node
{
  int data;
  struct Node *next;
} *top = NULL;

void push(int n)
{
  struct Node *t;
  t = (struct Node*)malloc(sizeof(struct Node));
  if (t == NULL)
  {
    printf("Stack is full\n");
  }
  else
  {
    t->data = n;
    t->next = top;
    top = t;
  }
}

int pop()
{
  struct Node *p;
  if (p == NULL)
  {
    printf("Stack is empty\n");
    return -1;
  }
  else
  {
    p = top;
    top = top->next;
    int x = p->data;
    free(p);
    return x;
  }
  
}

void display()
{
  struct Node *p;
  p = top;
  while (p)
  {
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

int main()
{
  push(4);
  push(5);
  push(10);
  display();
  printf("%d ", pop());
  // display();

  return 0;
}
