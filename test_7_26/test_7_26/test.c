#define _CRT_SECURE_NO_WARNINGS

int cmp(const void* _a, const void* _b)
{
    int a = *(int*)_a, b = *(int*)_b;
    return a - b;
}
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    (*returnSize) = numsSize;
    int* ans = malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        ans[i] = nums[i] * nums[i];

    }
    qsort(ans, numsSize, sizeof(int), cmp);
    return ans;
}