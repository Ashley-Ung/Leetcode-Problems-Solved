Question: TwoSum [Easy]
Given an array of integers nums and an integer target, return indices of the two numbers 
such that they add up to target. You may assume that each input would have exactly one 
solution, and you may not use the same element twice. You can return the answer in any 
order. Note: The returned array must be malloced, assume caller calls free().

Answer: 
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
int *values = (int* ) malloc(sizeof(int) * (*returnSize)); 
    for (int i = 0; i<numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (target == nums[j] + nums[i]) {
                int index = 0;
                values[index] = j;
                index++;
                values[index] = i;
                index++;
                return values;
            }
        }
    }
     return values;
}
