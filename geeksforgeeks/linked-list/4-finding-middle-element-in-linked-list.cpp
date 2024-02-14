/*
Given a singly linked list of N nodes.
The task is to find the middle of the linked list. For example, if the linked list is
1-> 2->3->4->5, then the middle node of the list is 3.
If there are two middle nodes(in case, when N is even), print the second middle element.
For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4.


Example 1

Input:
LinkedList: 1->2->3->4->5
Output: 3
Explanation:
Middle of linked list is 3.

Example 2:
Input:
LinkedList: 2->4->6->7->5->1
Output: 7
Explanation:
Middle of linked list is 7.

Your Task:
The task is to complete the function getMiddle() which takes a head reference as the only argument and should return the data at the middle node of the linked list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 5000

*/

class Solution
{
public:
  /* Should return data of middle node. If linked list is empty, then  -1*/
  int getMiddle(Node *head)
  {
    // Your code here
    Node *p = head;
    Node *q = head;
    if (q->next == NULL)
    {
      return q->data;
    }
    while (p->next != NULL)
    {
      q = q->next;
      p = p->next;
      if (p->next != NULL)
      {
        p = p->next;
      }
    };
    return q->data;
  }
};