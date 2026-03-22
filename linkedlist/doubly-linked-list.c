#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

struct Node
{
  struct Node *prev;
  int data;
  struct Node *next;
} *head = NULL;

void create(int A[], int n)
{
  int i;
  struct Node *t;
  struct Node *last;
  head = (struct Node *)malloc(sizeof(struct Node));
  head->data = A[0];
  head->prev = head->next = NULL;
  last = head;

  for (i = 1; i < n; i++)
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = last->next;
    t->prev = last;
    last->next = t;
    last = t;
  }
}

void display(struct Node *p)
{
  while (p)
  {
    printf("%d ", p->data);
    p = p->next;
  }
}

void displayReverse(struct Node *p)
{
  while (p->next != NULL)
  {
    p = p->next;
  }
  while (p)
  {
    printf("%d ", p->data);
      p = p->prev;
  }
}

int count(struct Node *p)
{
  int count = 0;
  while (p)
  {
    count++;
    p = p->next;
  }
  return count;
}

void insert(struct Node *p, int pos, int n)
{
  struct Node *t = NULL;
  int i = 0;
  if (pos < 0 || pos > count(p))
  {
    printf("\nnot valid index\n");
    return;
  }
  // creating new node
  t = (struct Node *)malloc(sizeof(struct Node));
  t->prev = NULL;
  t->data = n;
  t->next = NULL;

  if (pos == 0)
  {
    if (head)
    {
      t->prev = head->prev;
      t->next = head;
      head->prev = t;
    }
    head = t;
  }
  else
  {
    for (i = 0; i < pos - 1; i++)
    {
      p = p->next;
    }
    t->next = p->next;
    t->prev = p;
    if (p->next)
    {
      p->next->prev = t;
    }
    p->next = t;
  }
}

void deleteNode(int pos)
{
  if (pos < 1 || pos > count(head))
  {
    printf("\nnot valid index\n");
    return;
  }
  struct Node *p;
  struct Node *q;
  int i;
  p = head;
  if (pos == 1)
  {
    head = head->next;
    if (head)
    {
      head->prev = NULL;
    }
    free(p);
    p = NULL;
  }
  else
  {
    for (i = 0; i < pos - 1; i++)
    {
      p = p->next;
    }
    q = p->prev;

    q->next = p->next;
    p->next = NULL;
    if(p->next){
      p->next->prev = p->prev;
      p->prev = NULL;
    }
    free(p);
  }
}

int main()
{

  // mergin linked list
  int A[] = {10, 20, 30, 40, 50};
  create(A, 5);
  display(head);
  printf("\n");
  // displayReverse(head);
  insert(head, 0, -1);
  printf("\n");
  display(head);
  insert(head, 10, -2);
  insert(head, 2, 100);
  printf("\n");
  display(head);
  insert(head, 7, 400);
  printf("\n");
  display(head);
  deleteNode(1);
  printf("\n");
  display(head);
  deleteNode(8); 
  deleteNode(5); 
  printf("\n");
  display(head);
  return 0;
}