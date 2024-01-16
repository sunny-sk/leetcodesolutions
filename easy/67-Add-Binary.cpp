/*

Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.

*/

class Solution {
public:
    string addBinary(string input1, string input2) {
        string a = input1;
        string b = input2;
        string padding = "";
        string output = "";
        int l1 = a.length();
        int l2 = b.length();
        int carry = 0;
        int i = 0;
        if(l2 < l1){
            for(i = 0; i<l1-l2; i++){
                padding += "0";    
            }
            b = padding + b;
        }
        if(l1 < l2){
            for(i = 0; i<l2-l1; i++){
                padding += "0";    
            }
            a = padding + a;
        }
        for(i=b.length()-1;i >= 0; i--){
           int sum = (a[i] - '0') + (b[i] - '0') + carry;
            output = to_string(sum % 2) + output;
            carry = sum > 1 ? 1 : 0;
        }
        return carry ? "1" + output : output;
    }
};


/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
    if (a.length > b.length) {
        b = "".padStart(a.length - b.length, "0") + b;
    }
    if (b.length > a.length) {
        a = "".padStart(b.length - a.length, "0") + a;
    }
    let output = "";
    let carry = 0;

    for (let i = a.length - 1; i >= 0; i--) {
        const sum = parseInt(a[i]) + parseInt(b[i]) + carry;
        output = `${sum % 2}${output}`;
        carry = sum >= 2 ? 1 : 0;
    }
    return carry ? `1${output}` : `${output}`;
};