/*
Given a doubly linked list and a position. The task is to delete a node from given position (position starts from 1) in a doubly linked list.

Example 1:
Input:
LinkedList = 1 <--> 3 <--> 4 
x = 3
Output: 1 3  
Explanation: After deleting the node at
position 3 (position starts from 1),
the linked list will be now as 1->3.

Example 2:
Input:
LinkedList = 1 <--> 5 <--> 2 <--> 9  
x = 1
Output: 5 2 9

Your Task:
The task is to complete the function deleteNode() which should delete the node at given position and return the head of the linkedlist.

Expected Time Complexity : O(n)
Expected Auxilliary Space : O(1)

Constraints:
2 <= size of the linked list(n) <= 105
1 <= x <= n
1 <= node.data <= 109

*/


class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      if(x == 1){
          head_ref = head_ref->next;
          head_ref->prev = NULL;
      }else{
          Node *curr;
          curr=head_ref;
          for(int i=0; i<x-1&&curr;i++){
              curr = curr->next;
          }
          if(curr){
              curr->prev->next = curr->next;
              if(curr->next){
                  curr->next->prev = curr->prev;
              }
              curr->next=NULL;
              curr->prev=NULL;
          }
      }
      
      return head_ref;
    }
};