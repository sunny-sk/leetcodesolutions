/*
Given a linked list sorted in ascending order and an integer called data, insert data in the linked list such that the list remains sorted.

Example 1:
Input:
LinkedList: 25->36->47->58->69->80
data: 19
Output:
19 25 36 47 58 69 80
Explanation:
After inserting 19 the sorted linked list will look like the one in the output.

Example 2:
Input:
LinkedList: 50->100
data: 75
Output:
50 75 100
Explanation:
After inserting 75 the sorted linked list will look like the one in the output.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 104
-99999 <= A[i] <= 99999, for each valid i

*/

class Solution
{
public:
  /* The below method print the required sum of polynomial
  p1 and p2 as specified in output  */
  Node *sortedInsert(struct Node *head, int data)
  {
    // Code here
    Node *t = new Node(data);
    Node *p = head;
    Node *q = NULL;
    if (p == NULL || p->data >= data)
    {
      t->next = p;
      return t;
    }
    else
    {
      while (p != NULL && p->data <= data)
      {
        q = p;
        p = p->next;
      }
      t->next = q->next;
      q->next = t;
      return head;
    }
  }
};