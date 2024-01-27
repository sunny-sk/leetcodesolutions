/**
You are given an integer array nums. You need to create a 2D array from nums satisfying the following conditions:

The 2D array should contain only the elements of the array nums.
Each row in the 2D array contains distinct integers.
The number of rows in the 2D array should be minimal.
Return the resulting array. If there are multiple answers, return any of them.

Note that the 2D array can have a different number of elements on each row.

 

Example 1:

Input: nums = [1,3,4,1,2,3,1]
Output: [[1,3,4,2],[1,3],[1]]
Explanation: We can create a 2D array that contains the following rows:
- 1,3,4,2
- 1,3
- 1
All elements of nums were used, and each row of the 2D array contains distinct integers, so it is a valid answer.
It can be shown that we cannot have less than 3 rows in a valid array.
Example 2:

Input: nums = [1,2,3,4]
Output: [[4,3,2,1]]
Explanation: All elements of the array are distinct, so we can keep all of them in the first row of the 2D array.
 

Constraints:

1 <= nums.length <= 200
1 <= nums[i] <= nums.length

*/

// solution #1
/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var findMatrix = function (arr) {
  if (arr.length == 1) return [arr];
  let itemFreq = new Map();
  let maxRow = 0;
  let array2d = [];

  arr.forEach((item) => {
    let count = itemFreq.get(item) || 0;
    count++;
    itemFreq.set(item, count);
    maxRow = Math.max(maxRow, count);
  });

  for (let i = 0; i < maxRow; i++) {
    let row = [];
    itemFreq.forEach((value, key) => {
      if (value > 0) {
        row.push(key);
        let newFre = --value;
        itemFreq.set(key, newFre);
      }
    });
    array2d.push(row);
  }
  return array2d;
};

// solution #2
/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var findMatrix = function (arr) {
  let array2d = [new Set()];

  if (arr.length == 1) return [arr];

  for (let i = 0; i < arr.length; i++) {
    let inserted = false;
    for (let j = 0; j < array2d.length; j++) {
      if (array2d[j] !== undefined && !array2d[j].has(arr[i])) {
        array2d[j].add(arr[i]);
        inserted = true;
        break;
      }
    }
    if (!inserted) {
      array2d.push(new Set().add(arr[i]));
      inserted = false;
    }
  }
  for (let i = 0; i < array2d.length; i++) {
    array2d[i] = [...array2d[i]];
  }

  return array2d;
};
