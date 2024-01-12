/*

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.

*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int smWordLen = INT_MAX;
        string commonPrefix = "";
        string firstWord = strs[0];
        
         for(string &word : strs){
            smWordLen = smWordLen < word.length() ? smWordLen : word.length() ;
        }

        for(int i=0 ;i<smWordLen; i++){
            bool isPrefix = true;
              for(string &word : strs){
                 if(firstWord[i] != word[i]){
                    isPrefix = false;
                    break;
                }
            }
            if(!isPrefix){
                break;
            }
            commonPrefix += firstWord[i];
        }
        return commonPrefix;
    }
};