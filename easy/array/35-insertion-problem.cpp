/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4


Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104

*/

#include <iostream>
#include <vector>
class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    int length = nums.size();

    if (length == 1 && nums[0] < target)
    {
      return 1;
    }
    else if (length == 1 && nums[0] > target)
    {
      return 0;
    }
    else
    {
      return find(0, length - 1, target, nums);
    }
  }

  int find(int start, int end, int target, vector<int> &nums)
  {
    int mid = (start + end) / 2;

    if (nums[mid] == target)
      return mid;
    else if (start == end)
      return start;
    else if (nums[mid] > target)
      return find(start, mid - 1, target, nums);
    else
      return find(mid + 1, end, target, nums);
  }
};