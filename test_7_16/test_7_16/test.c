#define _CRT_SECURE_NO_WARNINGS


int sumOfSquares(int* nums, int numsSize) {
    int ret = 0;
    for (int i = 0; i < numsSize; i++) {
        if (numsSize % (i + 1) == 0) ret += nums[i] * nums[i];
    }
    return ret;
}
