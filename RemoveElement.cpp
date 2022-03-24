Question: Remove Element [Easy] 
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.
Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the 
array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. 
It does not matter what you leave beyond the first k elements. Return k after placing the final result in the first k slots of nums.

Answer: 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowRunner = 0; 
        int fastRunner = 0; 
        for (fastRunner; fastRunner < nums.size(); fastRunner++) {
            if (nums[fastRunner] != val) {  
                nums[slowRunner] = nums[fastRunner]; 
                slowRunner++;
            }
        }
        return slowRunner; 
    }
};
