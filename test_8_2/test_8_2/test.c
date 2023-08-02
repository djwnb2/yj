#define _CRT_SECURE_NO_WARNINGS

int cmp(int* a, int* b)
{
    return *a - *b;
}
int arrayPairSum(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int ans = 0;
    for (int i = 0; i < numsSize; i += 2)
    {
        ans += nums[i];
    }
    return ans;
}