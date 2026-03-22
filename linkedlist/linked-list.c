#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

struct Node
{
  int data;
  struct Node *next;
} *first = NULL, *second = NULL;

struct Node *create(int A[], int n)
{
  int i = 0;
  struct Node *t, *last;
  struct Node *firstNode;
  firstNode = (struct Node *)malloc(sizeof(struct Node));
  firstNode->data = A[0];
  firstNode->next = NULL;
  last = firstNode;

  for (i = 1; i < n; i++)
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
  return firstNode;
}

void display(struct Node *p)
{
  while (p != NULL)
  {
    printf("%d ", p->data);
    p = p->next;
  }
}
void display_r(struct Node *p)
{
  if (p != NULL)
  {
    printf("%d ", p->data);
    display_r(p->next);
  }
}

void reverse_display_r(struct Node *p)
{
  if (p != NULL)
  {
    reverse_display_r(p->next);
    printf("%d ", p->data);
  }
}

int count(struct Node *p)
{
  int i = 0;
  while (p != NULL)
  {
    i++;
    p = p->next;
  }

  return i;
}

int count_r(struct Node *p)
{
  return p == NULL ? 0 : count_r(p->next) + 1;
}

void sum(struct Node *p)
{
  int s = 0;
  while (p)
  {
    s += p->data;
    p = p->next;
  }
  printf("sum is %d ", s);
}

int sum_r(struct Node *p)
{
  if (!p)
    return 0;
  return sum_r(p->next) + p->data;
}

void max(struct Node *p)
{
  int s = INT_MIN;
  while (p)
  {
    s = s > p->data ? s : p->data;
    p = p->next;
  }
  printf("max is %d ", s);
}

struct Node *search_l(struct Node *p, int key)
{
  while (p)
  {
    if (p->data == key)
    {
      return p;
    }
    p = p->next;
  }
  return NULL;
}

void insert(struct Node *p, int index, int x)
{
  // not valid
  if (index < 0 || index > count(p))
    return;

  struct Node *t;
  t = (struct Node *)malloc(sizeof(struct Node));
  t->data = x;

  if (index == 0)
  {
    t->next = first;
    first = t;
  }
  else
  {
    int i;
    for (i = 0; i < index - 1; i++)
    {
      p = p->next;
    }
    t->next = p->next;
    p->next = t;
  }
}

void insert_at_sorted(int x)
{
  struct Node *t, *q, *p;
  t = (struct Node *)malloc(sizeof(struct Node));
  t->data = x;
  t->next = NULL;
  q = NULL;
  p = first;

  if (p == NULL)
  {
    first = p = t;
    return;
  }
  if (p != NULL && p->data > x)
  {
    t->next = first;
    first = t;
    return;
  }
  while (p != NULL && p->data < x)
  {
    q = p;
    p = p->next;
  }
  t->next = q->next;
  q->next = t;
}

void deleteNode(int pos)
{
  if (!first)
    return;
  if (pos < 1 || pos > count(first))
    return;
  struct Node *t = first;
  struct Node *q = NULL;
  if (pos == 1)
  {
    int x = t->data;
    first = first->next;
    free(t);
  }
  else
  {
    int i;
    for (i = 0; i < pos - 1 && t != NULL; i++)
    {
      q = t;
      t = t->next;
    }
    if (t)
    {
      q->next = t->next;
      t->next = NULL;
      int x = t->data;
      free(t);
    }
  }
}

int isSorted()
{
  struct Node *p = first;
  int x = INT16_MIN;
  while (p)
  {
    if (p->data < x)
    {
      return 0;
    }
    x = p->data;
    p = p->next;
  }
  return 1;
}

void removeDuplicate()
{
  struct Node *p = first;
  struct Node *q = NULL;
  while (p != NULL)
  {
    if (q != NULL && q->data == p->data)
    {
      q->next = p->next;
      free(p);
      p = q->next;
    }
    else
    {
      q = p;
      p = p->next;
    }
  }
}

void reverseUsingArray(struct Node *p)
{
  int linkedListCount = count(p);
  int *A = (int *)malloc(sizeof(int) * linkedListCount);
  struct Node *q = p;
  int i = 0;
  while (q != NULL)
  {
    A[i] = q->data;
    q = q->next;
    i++;
  }
  q = p;
  i--;
  while (q != NULL)
  {
    q->data = A[i];
    i--;
    q = q->next;
  }
}
void reverseWithoutArray(struct Node *p)
{
  struct Node *q = NULL;
  struct Node *r = NULL;
  while (p)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  first = q;
}

void reverseUsingR(struct Node *q, struct Node *p)
{
  if (p)
  {
    reverseUsingR(p, p->next);
    p->next = q;
  }
  else
  {
    first = q;
  }
}
void concat(struct Node *p, struct Node *q)
{
  while (p->next)
  {
    p = p->next;
  }
  p->next = q;
}

struct Node* merge(struct Node *p, struct Node *q)
{
  struct Node *last, *third;
  last = third = NULL;

  if (p->data < q->data){
    third = last = p;
    p = p->next;
    last->next = NULL;
  } else {
    third = last = q;
    q = q ->next;
    last->next = NULL; 
  }
  while(p && q){
    if(p->data < q->data){
      last->next = p;
      last = p;
      p = p->next;
      last->next = NULL;
    }
    else
    {
      last->next = q;
      last = q;
      q = q->next;
      last->next = NULL;
    }
  }
  if(p)
    last->next = p;
  if(q)
    last->next = q;
  return third;
}

  
void isLoop(struct Node *head){
  struct Node *p;
  struct Node *q;
  p = q = head;
  while(p && q && p != q){
    p = p->next;
    q = q->next;
    if(q){
     q = q->next;
    }
  }
  if(p == q){
    printf("is loop");
  }else{
    printf("is not loop");
  }
}

int main()
{
  // int A[] = {1, 2};
  // create(A, 2);
  // display(first);
  // printf("\n");
  // insert(first, 2, 3);
  // insert(first, 0, 0);
  // display(first);
  // insert_at_sorted(5);
  // printf("\n");
  // display(first);
  // insert_at_sorted(1);
  // insert_at_sorted(2);
  // insert_at_sorted(3);
  // insert_at_sorted(4);
  // insert_at_sorted(5);
  // printf("\n");
  // display(first);
  // reverseUsingArray(first);
  // printf("\n");
  // display(first);
  // reverseWithoutArray(first);
  // printf("\n");
  // display(first);
  // reverseUsingR(NULL, first);
  // printf("\n");
  // display(first);
  // deleteNode(1);
  // printf("\n");
  // deleteNode(4);
  // display(first);
  // printf("\n");
  // display_r(first);
  // printf("\n");
  // reverse_display_r(first);
  // printf("\n");
  // count(first);
  // printf("\n");
  // int result = count_r(first);
  // printf("Count is %d ", result);
  // printf("\n");
  // sum(first);
  // printf("\n");
  // result = sum_r(first);
  // printf("sum is %d ", result);
  // printf("\n");
  // max(first);
  // printf("\n");
  // struct Node *temp = search_l(first, 25);
  // if(temp){
  //   printf("key is found %d ", temp->data);
  // }else{
  //   printf("key not found");
  // }

  // concat linked list
  // int A[] = {1, 2, 3, 4, 5};
  // int B[] = {6,7,8,9,10};
  // struct Node *first = create(A, 5);
  // struct Node *second = create(B, 5);
  // display(first);
  // printf("\n");
  // display(second);
  // printf("\n");
  // concat(first, second);
  // printf("\n");
  // display(first);

  // mergin linked list
  int A[] = {10, 20, 30, 40, 50};
  int B[] = {5, 15, 25, 35, 45};
  struct Node *first = create(A, 5);
  struct Node *second = create(B, 5);
  display(first);
  printf("\n");
  display(second);
  printf("\n");
  struct Node *third = merge(first, second);
  display(third);

  return 0;
}