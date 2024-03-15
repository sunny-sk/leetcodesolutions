/*

Given a circular linked list, your task is to complete the method printList() that prints the linked list.

Input:
The printList function takes a single argument as input the reference pointer to the head of the linked list.
There are multiple test cases and for each test, the function will be called separately. 
Output: You just need to print the LinkedList in the same line and the next line will be added by the Driver Code.


Example 1:
Input:
2
7
374 363 171 497 282 306 426
2
162 231
Output:
426 306 282 497 171 363 374
231 162

Note : Input items are inserted at the front of linked list that is why output is in reverse order.

Constraints:
1<=T<=50
1<=N<=50

*/


/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
  // code here
  if(head){
      Node *curr;
      curr=head;
      do{
          cout<<curr->data<<" ";
          curr=curr->next;
      }while(curr!=head);
  }
}
