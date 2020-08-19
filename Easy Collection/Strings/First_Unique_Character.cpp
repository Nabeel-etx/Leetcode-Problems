/********************************************************************************************************
 * QUESTION -
 
 * Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.
 
 Example:
 s = "leetcode"
 return 0.

 s = "loveleetcode"
 return 2.
 
 Note: You may assume the string contains only lowercase English letters.
********************************************************************************************************/
// SOLUTION

class Solution {
public:
    int firstUniqChar(string s) {
        // Write your code below
        int ans = 0;
        unordered_map<char, int> mp;
        for(auto i : s){
            unordered_map<char, int>::iterator it = mp.find(i);
            if(it != mp.end()) it -> second++;
            else mp.insert(make_pair(i, 1));
        }
        for(int i = 0; i < s.size(); i++){
            if(mp[s[i]] == 1){
                return i;
                break;
            }
        }
        return -1;
    }
};