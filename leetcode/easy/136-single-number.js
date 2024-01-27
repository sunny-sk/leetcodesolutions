/*

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 
*/

var singleNumber = function (nums) {
  let counts = {};
  nums.forEach((e) => {
    if (counts[e] !== undefined) {
      counts[e] = ++counts[e];
    } else {
      counts[e] = 1;
    }
  });
  let result;
  Object.keys(counts).forEach((e) => {
    if (counts[e] == 1) {
      result = e;
      return;
    }
  });
  return result;
};

// Note* : This Problem can be solved in O(N) using Xor logic