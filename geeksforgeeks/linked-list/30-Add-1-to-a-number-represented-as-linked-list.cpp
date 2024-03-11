/*
A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.


Example 1:

Input:
LinkedList: 4->5->6
Output: 457
Explanation: 4->5->6 represents 456 and when 1 is added it becomes 457. 

Example 2:

Input:
LinkedList: 1->2->3
Output: 124 


Your Task:
Your task is to complete the function addOne() which takes the head of the linked list as the only argument and returns the head of the modified linked list. The driver code prints the number.
Note: The head represents the left-most digit of the number.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 1021


*/

class Solution
{
    public:
    Node* reverse(Node *listHead){
        Node *curr, *prev, *temp;
        curr = listHead;
        prev = NULL;
        // reverse 1
        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        listHead = prev;
        return listHead;
        
        
    }
    Node* addOne(Node *head) 
    { 
        Node *curr, *prev, *temp;
        // Your Code here
        head = reverse(head);
        // add
        int carry = 1;
        curr=head;
        prev=NULL;
        while(curr){
            prev = curr;
            int sum = curr->data + carry;
            curr->data = sum % 10;
            carry = sum / 10;
            curr = curr->next;
        }
        if(carry != 0){
            Node *t = new Node(carry);
            t->next = NULL;
            prev->next = t;
        }
        // reverse 2;
        head = reverse(head);
        return head;
        
        // return head of list after adding one
    }
};