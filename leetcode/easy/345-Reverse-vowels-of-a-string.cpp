/*

Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"
 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.

*/

class Solution {
public:

    bool isVowel(char a){
        if (
            a == 'a' ||
            a == 'e' ||
            a == 'i' ||
            a == 'o' ||
            a == 'u' ||
            a == 'A' ||
            a == 'E' ||
            a == 'I' ||
            a == 'O' ||
            a == 'U'
        ) {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int i = 0;
        string str = s;
        int j = str.length() - 1;
        while(i<=j){
            bool a = isVowel(str[i]);
            bool b = isVowel(str[j]);
            if(a && b) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--; 
            }else if(a){
                j--;
            }else if(b){
                i++;
            }
        }
        return str;
    }
};