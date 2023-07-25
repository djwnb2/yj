#define _CRT_SECURE_NO_WARNINGS

int subarraysDivByK(int* nums, int numsSize, int k) {
    int ans = 0;
    int h[10001] = { 1 };
    int prefix = 0;
    for (int i = 0; i < numsSize; i++)
    {
        prefix += nums[i];
        prefix %= k;
        if (prefix < 0) prefix += k;
        ans += h[prefix];
        ++h[prefix];
    }
    return ans;
}