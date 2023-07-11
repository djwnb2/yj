#define _CRT_SECURE_NO_WARNINGS

long long maxAlternatingSum(int* nums, int numsSize) {
    long long even = nums[0], odd = 0;
    for (int i = 1; i < numsSize; i++) {
        even = fmax(even, odd + nums[i]);
        odd = fmax(odd, even - nums[i]);
    }
    return even;
}

