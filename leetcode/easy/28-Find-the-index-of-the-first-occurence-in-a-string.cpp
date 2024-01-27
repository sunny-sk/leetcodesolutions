/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters.
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length()){
        return -1;
     }
    int l1 = haystack.length();
    int l2 = needle.length();

    for(int i=0; i<=l1-l2; i++){
        bool found = true;
        int k = i;
        for(int j=0; j<l2; j++){
            if(haystack[k++] != needle[j]) {
                found = false;
                break;
            }
        }
        if(found){
           return i; 
        }
    }
    
    return -1;
    }
};