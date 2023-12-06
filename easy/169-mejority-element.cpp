/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.



Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2


Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109


Follow-up: Could you solve the problem in linear time and in O(1) space?

*/

class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    map<int, int> mp;
    map<int, int>::iterator itr;
    int result = 0;
    int key = 0;
    for (auto el : nums)
    {
      /* code */
      if (mp[el])
      {
        mp[el] = ++mp[el];
      }
      else
      {
        mp[el] = 1;
      }
    }
    for (itr = mp.begin(); itr != mp.end(); ++itr)
    {
      if (itr->second > result)
      {
        result = itr->second;
        key = itr->first;
      }
    }
    return key;
  }
};

/*
Note: the above solution take
space complexity : 0(N)
time complexity  : 0(N)


but this can be done using Boyer-Moore Voting Algorithm
space complexity : 0(1)
time complexity  : 0(N)
*/