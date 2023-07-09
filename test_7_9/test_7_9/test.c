#define _CRT_SECURE_NO_WARNINGS
//15. 三数之和
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int comp(int* a, int* b)
{
    return *a - *b;
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes)
{
    qsort(nums, numsSize, sizeof(int), comp);
    int** res = malloc(sizeof(int*) * 18000);
    int count = 0;
    for (int i = 0; i < numsSize - 2; i++)
    {
        int left = i + 1;
        int right = numsSize - 1;
        if (i >= 1 && nums[i] == nums[i - 1])
        {
            continue;
        }
        else if (nums[i] > 0)
        {
            continue;
        }
        else
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum > 0)
                {
                    right--;
                }
                else if (sum < 0)
                {
                    left++;
                }
                else if (sum == 0)
                {
                    res[count] = malloc(sizeof(int) * 3);
                    res[count][0] = nums[i];
                    res[count][1] = nums[left];
                    res[count][2] = nums[right];
                    count++;
                    while (left < right && nums[left] == nums[left + 1])
                    {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1])
                    {
                        right--;
                    }
                    left++;
                    right--;
                }
            }
    }
    *returnSize = count;
    *returnColumnSizes = malloc(sizeof(int) * count);
    for (int i = 0; i < count; i++)
    {
        returnColumnSizes[0][i] = 3;
    }

    return res;
}
