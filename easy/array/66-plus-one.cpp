/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.



Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].


Constraints:

1 <= digits.length <= 100
0 <= digits[i] <= 9
digits does not contain any leading 0's.
*/

class Solution
{
public:
  vector<int> plusOne(vector<int> &arr)
  {

    int temp[100] = {1};
    int flag = true;
    int i = arr.size() - 1;
    int j = 0;
    int oldRem = 0;
    while (flag && i >= 0)
    {
      int k = j == 0 ? temp[0] : 0;
      int p = arr[i] + k + oldRem;
      if (p < 10)
      {
        arr[i] = p;
        flag = false;
        oldRem = 0;
      }
      else
      {
        int rem = p % 10;
        arr[i] = rem;
        oldRem = p / 10;
        i--;
        j++;
      }
    }

    if (oldRem > 0)
    {
      arr.insert(arr.begin(), oldRem);
    }
    return arr;
  }
};