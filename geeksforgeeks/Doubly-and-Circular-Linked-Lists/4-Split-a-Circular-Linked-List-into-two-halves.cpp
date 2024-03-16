/*

Given a Cirular Linked List of size N, split it into two halves circular lists. If there are odd number of nodes in the given circular linked list then out of the resulting two halved lists, first list should have one node more than the second list. The resultant lists should also be circular lists and not linear lists.


Example 1:
Input:
Circular LinkedList: 1->5->7
Output:
1 5
7

Example 2:
Input:
Circular LinkedList: 2->6->1->5
Output:
2 6
1 5

Your Task:
Your task is to complete the given function splitList(), which takes 3 input parameters: The address of the head of the linked list, addresses of the head of the first and second halved resultant lists and Set the head1_ref and head2_ref to the first resultant list and second resultant list respectively.


Expected Time Complexity: O(N)
Expected Auxilliary Space: O(1)


Constraints:
2 <= N <= 100

*/


/* Function to print nodes in a given Circular linked list */
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
   struct Node *last, *q;
    last = q = head;
    int count = 1;
    
    while(last->next != head){
        count++;
        last = last->next;
    }
    
    last->next = NULL;



    if(count % 2 == 0){
        // even
        count = count/2;
    }else{
        // odd
        count = (count/2)+1;
    }
    
    for(int i = 0; i<count-1; i++){
        q = q->next;
    }
    
    struct Node *t = q->next;
    q->next = head;
    *head1_ref = head;
    
    last->next = t;
    *head2_ref = t;

}