#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

struct Node
{
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
  head->next = head;
  last = head;

  for (i = 1; i < n; i++)
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = last->next;
    last->next = t;
    last = t;
  }
}

void display(struct Node *p)
{
  do
  {
    printf("%d ", p->data);
    p = p->next;
  } while (p != head);
}

void display_r(struct Node *p)
{
  static int flag = 0;
  if (p != head || flag == 0)
  {
    printf("%d ", p->data);
    flag = 1;
    display_r(p->next);
  }
}

int count(struct Node *p)
{
  int count = 0;
  struct Node *t;
  do
  {
    count++;
    p = p->next;
  } while (p != head);
  return count;
}

void insert(struct Node *p, int pos, int n)
{
  struct Node *t;
  struct Node *q = head;
  int i;
  if (pos < 0 || pos > count(p))
  {
    printf("not valid index \n");
    return;
  }
  t = (struct Node *)malloc(sizeof(struct Node));
  t->data = n;
  if (pos == 0)
  {

    // no node
    if (head == NULL)
    {
      head = t;
      head->next = head;
    }
    else
    {
      while (q->next != head)
      {
        q = q->next;
      }
      t->next = head; // t->next = q->next;
      q->next = t;
      head = t; // optional
    }
  }
  else
  {
    for (i = 0; i < pos - 1; i++)
    {
      p = p->next;
    }
    t->next = p->next;
    p->next = t;
  }
}

void deleteNode(int pos){
  struct Node *q;
  struct Node *p;
  int x, i;
  if(pos < 1 || pos > count(head)){
    printf("\nnot valid index \n");
  }
  if(pos == 1){
    p = q = head;
    while(p->next != head){
      p = p->next;
    }
    x = head->data;
    if (p == head)
    {
      free(p);
      head = NULL;
    }
    else
    {
      p->next = head->next;
      free(head);
      head = p->next;
    }
  }else{
    p = head;
    for (i = 0; i < pos - 1; i++){
      q = p;
      p = p->next;
    }
    q->next = p->next;
    p->next = NULL;
    x = p->data;
    free(p);
  }
}


int main(){

  // mergin linked list
  int A[] = {10, 20, 30, 40, 50};
  create(A, 5);
  display(head);
  // printf("\n");
  // display_r(head);
  insert(head, 0, 23);
  printf("\n");
  display(head);
  insert(head, 4, 23);
  insert(head, 7, 100);
  printf("\n");
  display(head);
  deleteNode(1);
  printf("\n");
  display(head);
  deleteNode(6);
  printf("\n");
  display(head);
  return 0;
}