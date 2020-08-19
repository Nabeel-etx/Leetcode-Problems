/********************************************************************************************************

 * QUESTION -
 
Write a function that reverses a string. The input string is given as an array of characters char[].
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
You may assume all the characters consist of printable ascii characters.

Example 1:
Input: ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

Hint 1:
The entire logic for reversing a string is based on using the opposite directional two-pointer approach!

********************************************************************************************************/
//  SOLUTION

class Solution {
public:
    void reverseString(vector<char>& s) {
        // Write Your Code Below
        int last = s.size()-1;
        int start = 0;
        for(int i = 0; i < s.size()/2; i++){
            char begin = s[start];
            char end = s[last];
            s[start] = end;
            s[last] = begin;
            start++;
            last--;
        }
    }
};