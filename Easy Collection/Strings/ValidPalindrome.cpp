/********************************************************************************************************
 * QUESTION -
 
 * Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
 
 Example 1:
 Input: "A man, a plan, a canal: Panama"
 Output: true

 Example 2:
 Input: "race a car"
 Output: false

 Note: For the purpose of this problem, we define empty string as valid palindrome.

 Constraints:
 - string 's' consists only of printable ASCII characters.
********************************************************************************************************/
// SOLUTION:

class Solution {
public:
    bool isPalindrome(string s) {
        // Write Your Code Below
        
        string temp;
        for(auto i : s){
            if(isalnum(i))temp.push_back(tolower((i)));
        }
        int lastIdx = temp.size()-1;
        
        for(int i=0; i < temp.size(); i++){
            if(temp[i] == temp[lastIdx]){
                lastIdx--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};