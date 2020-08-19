/********************************************************************************************************
 * QUESTION -
 
 Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1]

Hint 1:
A really brute force way would be to search for all possible pairs of numbers but that would be too slow. 
Again, it's best to try out brute force solutions for just for completeness. 
It is from these brute force solutions that you can come up with optimizations.

Hint 2:
The second train of thought is, without changing the array, can we use additional space somehow? 
Like maybe a hash map to speed up the search?
********************************************************************************************************/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Write your code below
        int n = nums.size();
        vector<int>arr;
       // unordered_set<int> set;
        
        for(int i = 0; i < n; i++){
                for(int j = i+1; j < n; j++){
                    if(nums[i] + nums[j] == target){
                        arr.push_back(i);
                        arr.push_back(j);
                    }
                }
        }
        return arr;
    }
};