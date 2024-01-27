/*

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 

Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.

*/

class Solution {
public:
  
    bool isPalindrome(string t) {
        if(t == " ") return true;
        string s = "";
        for(char c : t){
          if((c >= 97 && c <= 122) || (c >= 48 && c <= 57) || (c >= 65 && c <= 90) ){
                s += c;
            }  
        }
        int firstP = 0;
        int lastP = s.length()-1;

         while(firstP < lastP){
            if(tolower(s[firstP]) != tolower(s[lastP]))  return false;
            firstP++;
            lastP--;
        }
        return true;
    }
};