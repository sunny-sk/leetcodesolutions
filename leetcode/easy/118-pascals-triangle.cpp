/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]


Constraints:

1 <= numRows <= 30

*/

class Solution
{
public:
  vector<vector<int>> generate(int numRows)
  {
    vector<vector<int>> pyrmid = {};
    pyrmid.reserve(numRows);
    for (int i = 0; i < numRows; i++)
    {
      if (i == 0)
      {
        pyrmid.push_back({1});
      }
      else if (i == 1)
      {
        pyrmid.push_back({1, 1});
      }
      else
      {
        vector<int> x = {1}; // entering fist element
        for (int k = 1; k < pyrmid[i - 1].size(); k++)
        {
          int sum = pyrmid[i - 1][k] + pyrmid[i - 1][k - 1];
          x.push_back(sum);
        }
        x.push_back(1); // entering fist element
        pyrmid.push_back(x);
      }
    }
    return pyrmid;
  }
};