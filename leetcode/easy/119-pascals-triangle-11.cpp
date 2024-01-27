/*
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1

Example 1:

Input: rowIndex = 3
Output: [1,3,3,1]

Input: rowIndex = 0
Output: [1]


Constraints:

1 <= numRows <= 33

*/

class Solution
{
public:
  vector<int> getRow(int rowIndex)
  {
    vector<vector<int>> rows;
    int finalRowIndex = 1 + rowIndex;
    int i;
    for (i = 0; i < finalRowIndex; ++i)
    {
      vector<int> temp(i + 1, 1);
      for (int j = 1; j <= i - 1; ++j)
      {
        temp[j] = rows[i - 1][j] + rows[i - 1][j - 1];
      }
      rows.push_back(temp);
    }
    return rows[i - 1];
  }
};