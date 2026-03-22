#include <iostream>

using namespace std;

class Node {
  public:
    int data;
    Node *next;
};

class LinkedList{
  private:
    Node *first;
  public:
    LinkedList(){
      first = NULL;
    }
    LinkedList(int A[], int n);
    ~LinkedList();
    void display();
    void insertNode(int index, int x);
    int deleteNode(int index);
    int length();
};

LinkedList::LinkedList(int A[], int n){
  Node *last, *t;
  int i = 0;
  first = new Node;
  first->data = A[0];
  first->next = NULL;
  last = first;

  for (i = 1; i < n; i++)
  {
    t = new Node;
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
  
}


void LinkedList::display(){
  Node *last;
  last = first;
  while (last)
  {
    cout << last->data << " ";
    last = last->next;
  }
}
int LinkedList::length(){
  Node *p = first;
  int count= 0;
  while (p)
  {
    count++;
    p = p->next;
  }
  return count;
}
LinkedList::~LinkedList(){
  Node *p = first;
  while (p)
  {
    first = first->next;
    delete p;
    p = first;
  }
}

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  LinkedList l(A, 5);
  l.display();
  cout << endl;
  int count = l.length();
  cout << count << endl;
  return 0;
}