#define _CRT_SECURE_NO_WARNINGS
//1. 两数之和
int* twoSum(int* nums, int numsSize, int target) {
    int i, j;
    int* result = NULL;
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result = (int*)malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}



int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j = 0;
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            int i, j = 0;
            if (nums[i] + nums[j] == target)
            {
                returnSize = (int*)malloc(sizeof(int) * 2);
                returnSize[0] = i;
                returnSize[1] = j;
                return returnSize;
            }
        }
    }
    return returnSize;
}