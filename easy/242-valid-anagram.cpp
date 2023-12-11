/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/



class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> check;
        for( char c : s){
            if(check.find(c) != check.end()){
                check[c] = ++check[c];
             }else{
                check[c] = 1;
            }
        }
         for( char k : t){
            if(check.find(k) != check.end() && check[k] != 0 ){
                check[k] = --check[k];
             }else{
                 return false;
                 break;
            }
        }
        return true;
    }
};