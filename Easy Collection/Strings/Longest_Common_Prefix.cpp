/*********************************************************************************************************
 * QUESTION -
 
 * Write a function to find the longest common prefix string amongst an array of strings.
   If there is no common prefix, return an empty string "".


Example 1:
Input: ["flower","flow","flight"]
Output: "fl"
----------------------------------------------------------------------

Example 2:
Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings
----------------------------------------------------------------------

Note:
All given inputs are in lowercase letters a-z.
*********************************************************************************************************/

// SOLUTION:

class Solution {
public:
    string commonPref(string& a, string& b){
        // Write Your Code Below
        
        string common = "";
        for(int i = 0; i < a.length() && i < b.length(); i++){
            if(a[i] == b[i]){
                common += a[i];
            }
            else break;
        }
        return common;
    }
    
    
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        if(strs.size()== 1) return strs[0];
       // string ans = "";
        string firstElement = strs[0];
        for(int i = 1; i < strs.size(); i++){
            firstElement = commonPref(firstElement, strs[i]);
        }
        return firstElement;
        
    }
};