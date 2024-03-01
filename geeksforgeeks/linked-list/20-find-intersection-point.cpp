/*
Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.

Example 1:

Input:
LinkList1 = 3->6->9->common
LinkList2 = 10->common
common = 15->30->NULL
Output: 15

Example 2:

Input:
Linked List 1 = 4->1->common
Linked List 2 = 5->6->1->common
common = 8->4->5->NULL
Output: 8

Your Task:
You don't need to read input or print anything. The task is to complete the function intersectPoint() which takes the pointer to the head of linklist1(head1) and linklist2(head2) as input parameters and returns data value of a node where two linked lists intersect. If linked list do not merge at any point, then it should return -1.
Challenge : Try to solve the problem without using any extra space.

 

Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(1)

 

Constraints:
Length of Both linkedList before intersection(if any) is greater than 0.
2 ≤ N + M ≤ 2*105
-1000 ≤ value ≤ 1000



*/

int len(Node *temp){
    int count = 0;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int count = 0;
    Node *p, *q, *j, *k;
    p = j = head1;
    q = k = head2;
    
    int length1 = len(head1);
    int length2 = len(head2);
    
    if(length1 > length2){
        for(int i = 0; i<length1 - length2 && j ;i++){
          j = j->next;
        }
    }else {
      for(int i = 0; i<length2 - length1 && k ;i++){
          k = k->next;
      }
    }

    while(j && k){
        if(j == k){
            return j->data;
        }else{
            j = j->next;
            k = k->next;
        }
    }
    
    return -1;
}
