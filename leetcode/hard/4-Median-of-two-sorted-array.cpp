/*

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).


Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.


Constraints:

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106

*/

class Solution
{
public:
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
  {
    vector<int> mergedArray;
    int nums1_size = nums1.size();
    int nums2_size = nums2.size();
    mergedArray.reserve(nums1_size + nums2_size);

    int i = 0, j = 0;

    while (i <= nums1_size - 1 && j <= nums2_size - 1)
    {
      if (nums1[i] < nums2[j])
      {
        mergedArray.push_back(nums1[i++]);
      }
      else
      {
        mergedArray.push_back(nums2[j++]);
      }
    }
    for (; i <= nums1_size - 1; i++)
    {
      mergedArray.push_back(nums1[i]);
    }
    for (; j <= nums2_size - 1; j++)
    {
      mergedArray.push_back(nums2[j]);
    }

    int total = nums1_size + nums2_size;
    if (total % 2 == 0)
    {
      // even
      int a = (total / 2) - 1;
      return (double)(mergedArray[a] + mergedArray[a + 1]) / 2;
    }
    else
    {
      // odd
      return (double)mergedArray[((total + 1) / 2) - 1];
    }
  }
};