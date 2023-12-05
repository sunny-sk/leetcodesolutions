/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.



Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true


Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/

class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    unordered_set<int> sets;
    bool result = false;
    for (auto el : nums)
    {
      if (!sets.insert(el).second)
      {
        return true;
      }
    }
    return result;
  }
};

/*

unordered set can contains only unique elements
.insert() return pair of element check for doc.
ref: https://www.geeksforgeeks.org/unordered_set-insert-function-in-c-stl/
*/
