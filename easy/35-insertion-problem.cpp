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

using namespace std;

int find(vector<int>&arr, int i, int j, int target){
    while(i<=j){
        if(i==j){
            if(arr[i] < target) return i+1;
            else return i;
        }
        int mid = (i+j)/2;
        
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) i = mid +1;
        else j = mid -1;
    }
    return i;
}

int main()
{
    std::vector<int> arr = {1,3,5,6};
    int target = 2;
    int i =  0;
    int size = arr.size();
    int j = size - 1;
    cout << find(arr, i, j , target) << endl;
    return 0;
}
