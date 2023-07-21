#define _CRT_SECURE_NO_WARNINGS

int cmp(const void* a, const void* b)
{
    return *(int*)a < *(int*)b;
}
int thirdMax(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(nums[0]), cmp);
    int target = 0;
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[i - 1] && ++target == 2)
        {
            return nums[i];
        }
    }
    return nums[0];
}