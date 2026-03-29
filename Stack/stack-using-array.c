#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

struct Stack
{
  int size;
  int top;
  int *s;
};

int isEmpty(struct Stack st)
{
  if (st.top == -1)
  {
    printf("isEmpty: stack is empty\n");
    return 1;
  }
  else
  {
    printf("isEmpty: stack is full\n");
    return 0;
  }
}


void create(struct Stack *st)
{
  printf("Enter size\n");
  scanf("%d", &st->size);
  st->top = -1;
  st->s = (int *)malloc(sizeof(int) * st->size);
}

void display(struct Stack st)
{
  int i;
  for (i = st.top; i >= 0; i--)
  {
    printf("%d ", st.s[i]);
  }
  printf("\n");
}

int pop(struct Stack *st)
{
  int x = -1;
  if (isEmpty(*st) == 1)
  {
  }
  else
  {
    x = st->s[st->top];
    st->top--;
  }
  return x;
}

void push(struct Stack *st, int x)
{
  if (st->top == st->size - 1)
  {
    printf("stack is full\n");
  }
  else
  {
    st->top++;
    st->s[st->top] = x;
  }
}


int isFull(struct Stack st)
{
  if (st.top == st.size - 1)
  {
    printf("stack is full\n");
    return 1;
  }
  else
  {
    return 0;
  }
}

int peek(struct Stack st, int index)
{

  int x = -1;
  int k = st.top - index + 1;
  if(k < 0){
      printf("stack is empty\n");
  }else {
    x = st.s[k];
  }
  return x;
}

int stackTop(struct Stack st){
  if(!isEmpty(st)){
    return st.s[st.top];
  }
  return -1;
}

int main()
{
  struct Stack st;
  create(&st);
  push(&st, 10);
  push(&st, 20);
  push(&st, 30);
  push(&st, 5);
  push(&st, 2);
  display(st);
  printf("%d", stackTop(st));
  printf("\n");
  printf("%d", peek(st, 3));
  // isFull(st);
  // printf("%d", pop(&st));
  // printf("\n");
  // printf("%d", pop(&st));
  // printf("\n");
  // printf("%d", pop(&st));
  // printf("\n");
  // printf("%d", pop(&st));
  // printf("\n");
  // display(st);
  return 0;
}
