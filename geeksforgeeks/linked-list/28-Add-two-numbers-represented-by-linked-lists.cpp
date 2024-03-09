/*
Given two decimal numbers represented by two linked lists of size N and M respectively. The task is to return a linked list that represents the sum of these two numbers.

For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.


Example 1:

Input:
N = 2
valueN[] = {4,5}
M = 3
valueM[] = {3,4,5}
Output: 3 9 0  
Explanation: For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list resultant linked
list will be (3 9 0).

Example 2:

Input:
N = 2
valueN[] = {6,3}
M = 1
valueM[] = {7}
Output: 7 0
Explanation: For the given two linked
list (6 3) and (7), after adding the
two linked list resultant linked list
will be (7 0).


Your Task:
The task is to complete the function addTwoLists() which has node reference of both the linked lists and returns the head of the sum list.   

Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(Max(N,M)) for the resultant list.

Constraints:
1 <= N, M <= 5000


*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        struct Node *temp, *curr, *prev;
        // reversing first linked list
        prev= NULL;
        curr=temp=first;
        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev=curr;
            curr=temp;
        }
        first=prev;
        // reversing second linked list
        prev= NULL;
        curr=temp=second;
        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev=curr;
            curr=temp;
        }
        second=prev;
        // calculate sum
        
        int carry=0;
        struct Node *digit1, *digit2, *third;
        digit1=first;
        digit2=second;
        third = NULL;
        while(digit1 != NULL || digit2 != NULL || carry != 0){
            int sum = carry;
            if(digit1){
                sum += digit1->data;
                digit1=digit1->next;
            }
            if(digit2){
                sum += digit2->data;
                digit2=digit2->next;
            }
            if (sum > 9){
                carry = sum / 10;
                sum = sum % 10;
            }else{
                carry=0;
            }
            
            struct Node *temp = new Node(sum);
            temp->next= third;
            third = temp;
        }
        
        return third;
    
        
    }
};