/********************************************************************************************************
 * QUESTION -
 
 * Given two strings s and t , write a function to determine if t is an anagram of s.
 
 Example 1:
 Input: s = "anagram", t = "nagaram"
 Output: true             

 Example 2:
 Input: s = "rat", t = "car"
 Output: false   

 Note:
 You may assume the string contains only lowercase alphabets.

 Follow up:
 What if the inputs contain unicode characters? How would you adapt your solution to such case?

********************************************************************************************************/
// SOLUTION

class Solution {
public:
    bool isAnagram(string s, string t) {
        // Write your code below
        //bool ans = true;
        unordered_set<char> a;
        int sizeA = s.size();
        int tsize = t.size();
        if(sizeA != tsize)return false;
        for(int i = 0; i < sizeA; i++){
            int sizeB = t.size();
            for(int j = 0; j < sizeB; j++){
                if(s[i] == t[j]){
                    t.erase(t.begin()+j);
                    break;
                }
            }
        }
        if(t.size() == 0)return true;
        else return false;
    }
};