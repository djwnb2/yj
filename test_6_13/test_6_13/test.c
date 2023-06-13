#define _CRT_SECURE_NO_WARNINGS
//2475. 数组中不等三元组的数目
int unequalTriplets(int* nums, int numsSize) {
    int res = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            for (int k = j + 1; k < numsSize; k++)
            {
                if (nums[j] != nums[k] && nums[i] != nums[j] && nums[i] != nums[k])
                {
                    res++;
                }
            }
        }
    }
    return res;
}