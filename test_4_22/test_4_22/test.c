#define _CRT_SECURE_NO_WARNINGS
//136. 只出现一次的数字
int singleNumber(int* nums, int numsSize) {
    int num = 0;
    for (int i = 0; i < numsSize; i++)
    {
        num ^= nums[i];
    }
    return num;
}