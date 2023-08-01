#define _CRT_SECURE_NO_WARNINGS

#define MIN(a,b) ((a)<(b)? (a):(b))
int cmp(const void* a, const void* b)
{
    return  *(int*)a - *(int*)b;
}
int minimumDifference(int* nums, int numsSize, int k) {

    qsort(nums, numsSize, sizeof(int), cmp);
    int ans = INT_MAX;
    for (int i = 0; i + k - 1 < numsSize; i++)
    {
        ans = MIN(ans, nums[i + k - 1] - nums[i]);
    }
    return ans;
}