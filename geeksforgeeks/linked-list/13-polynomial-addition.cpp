/*
Given two polynomial numbers represented by a linked list. The task is to complete the function addPolynomial() that adds these lists meaning adds the coefficients who have the same variable powers.
Note:  Given polynomials are sorted in decreasing order of power.


Example 1:

Input:
LinkedList1:  (1,x2)
LinkedList2:  (1,x3)
Output:
1x^3 + 1x^2
Explanation: Since, x2 and x3 both have
different powers as 2 and 3. So, their
coefficient can't be added up.

Example 2:
Input:
LinkedList1:  (1,x3) -> (2,x2)
LinkedList2:  (3,x3) -> (4,x2)
Output:
4x^3 + 6x^2
Explanation: Since, x3 has two different
coefficients as 3 and 1. Adding them up
will lead to 4x3. Also, x2 has two
coefficients as 4 and 2. So, adding them
up will give 6x2.

Your Task:
The task is to complete the function addPolynomial() which should add the polynomial with same powers return the required polynomial in decreasing order of the power in the form of a linked list.
Note: Try to solve the question without using any extra space.

Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N, M <= 105
1 <= x, y <= 106

*/

class Solution
{
public:
  /* The below method print the required sum of polynomial
  p1 and p2 as specified in output  */
  Node *addPolynomial(Node *a1, Node *a2)
  {
    // Your code here
    Node *head = NULL;
    Node *headLast = NULL;
    Node *temp = NULL;
    while (a1 || a2)
    {
      if (a1 && a2)
      {
        if (a1->pow == a2->pow)
        {
          a1->coeff = a1->coeff + a2->coeff;
          temp = a1;
          a1 = a1->next;
          a2 = a2->next;
        }
        else if (a1->pow > a2->pow)
        {
          temp = a1;
          a1 = a1->next;
        }
        else
        {
          temp = a2;
          a2 = a2->next;
        }
      }
      else if (a1)
      {
        temp = a1;
        a1 = a1->next;
      }
      else if (a2)
      {
        temp = a2;
        a2 = a2->next;
      }
      if (head == NULL)
      {
        headLast = head = temp;
      }
      else
      {
        headLast->next = temp;
        headLast = temp;
      }
    }
    return head;
  }
};