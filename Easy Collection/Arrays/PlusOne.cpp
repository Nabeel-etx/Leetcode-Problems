/********************************************************************************************************

 * QUESTION-
Given a non-empty array of digits representing a non-negative integer, increment one to the integer.
The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.
You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:
Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.

Example 2:
Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.

********************************************************************************************************/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //Write your code below
        
        int last = digits.size()-1;
        int num = 0;
        bool carry = true; 
       for(int i = last; i >= 0; i--)       //read from ending of the vector.
       {
           if(carry)
           {
               num = digits[i] + 1;
               if(num > 9) carry = true;
               else carry = false;         //check for carry
               digits[i] = num % 10;       // update in the input vector accordingly   
           }
       }        
       if(carry)
           digits.insert(digits.begin(),1); // insert 1 in the begining if carry
       return digits;
    }
};