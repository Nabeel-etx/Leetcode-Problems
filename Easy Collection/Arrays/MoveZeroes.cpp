/********************************************************************************************************

 * QUESTION -
 Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements. 

 Example:
 Input: [0,1,0,3,12]
 Output: [1,3,12,0,0]

 Note:
 You must do this in-place without making a copy of the array.
 Minimize the total number of operations.

 Hint 1:
 In-place means we should not be allocating any space for extra array. But we are allowed to modify the existing array. 
 However, as a first step, try coming up with a solution that makes use of additional space. 
 For this problem as well, first apply the idea discussed using an additional array and the in-place solution will pop up eventually.

 Hint 2:
 A two-pointer approach could be helpful here. 
 The idea would be to have one pointer for iterating the array and another pointer that just works on the non-zero elements of the array

 ********************************************************************************************************/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Write your code below
        int n = nums.size();
        int counter = 0;
        for(int i : nums){
            if(i != 0 ){
                nums[counter] = i;
                counter++;
            }else continue;
        }
        for(int i = counter; i < n; i++){
            nums[i]=0;
        }
        
    }
};
