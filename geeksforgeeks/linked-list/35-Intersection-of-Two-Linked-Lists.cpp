/*
Given two linked lists of length n and m, the task is to complete the function findIntersection(), which returns the intersection of two linked lists. Each of the two linked lists contains distinct node values.


Example 1:
Input:
n = 6, m = 4
LinkedList1: 9->6->4->2->3->8
LinkedList2: 1->2->8->6
Output: 6 2 8
Explanation: Nodes 6, 2 and 8 are common in both of the lists and the order will be according toLinkedList1. 

Example 2:
n = 5, m = 2
LinkedList1: 5->3->1->13->14
LinkedList2: 3->13
Output: 3 13
Explanation: Nodes 3 and 13 are common in both of the lists and the order will be according toLinkedList1. 

Your Task:
Your task is to complete the function findIntersection() which takes the heads of the 2 input linked lists as parameters and returns the head of the intersection list. The returned list will be automatically printed by driver code.
Note: The order of nodes in this list should be the same as the order in which those particular nodes appear in input list 1 and return null if no common element is present.

Constraints:
1 <= n,m <= 104
1 <= node values <= 105

Expected time complexity: O(m+n)
Expected auxiliary space: O(m+n)

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        Node *p, *q, *head3, *last;
        head3=last=NULL;
        p = head1;
        q = head2;
        unordered_map<int, int> un;
        while(q){
                un[q->data] = 1;
                q = q->next;
        }
        while(p){
            if(un.find(p->data) != un.end()){
                Node *t = new Node(p->data);
                t->next=NULL;
                if(last){
                    last->next = t;
                    last = t;
                }else{
                    last=head3=t;
                }
            }
            p = p->next;
        }
        return head3;
    }
};