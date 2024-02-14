/*
Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.


Example 1

Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9
Output: 8
Explanation: In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end. 2nd node
from end is 8.

Example 2:
Input:
N = 5
LinkedList: 10->5->100->5
Output: -1
Explanation: In the second example, there
are 4 nodes in the linked list and we
need to find 5th from the end. Since 'n'
is more than the number of nodes in the
linked list, the output is -1.

Your Task:
The task is to complete the function getNthFromLast() which takes two arguments: reference to head and N and you need to return Nth from the end or -1 in case node doesn't exist.

Note:
Try to solve in a single traversal.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= L <= 106
1 <= N <= 106




*/

// #solution 1 - in single trace

class Solution
{
public:
  int getNthFromLast(Node *head, int n)
  {
    // Your code here
    Node *q = head;
    Node *p = head;
    for (int i = 0; i < n - 1; i++)
    {
      if (q)
      {
        q = q->next;
      }
      else
      {
        break;
      }
    }
    if (!q)
      return -1;

    while (q->next)
    {
      q = q->next;
      p = p->next;
    }

    return p->data;
  }
};

// #solution 2 

class Solution
{
public:
  int getNthFromLast(Node *head, int n)
  {
    // Your code here
    int count = 0;
    Node *p = head;
    while (p)
    {
      count++;
      p = p->next;
    }
    if (count < n)
      return -1;
    for (int i = 0; i < count - n; i++)
    {
      head = head->next;
    }
    return head->data;
  }
};
