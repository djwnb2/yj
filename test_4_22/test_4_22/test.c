#define _CRT_SECURE_NO_WARNINGS
//136. ֻ����һ�ε�����
int singleNumber(int* nums, int numsSize) {
    int num = 0;
    for (int i = 0; i < numsSize; i++)
    {
        num ^= nums[i];
    }
    return num;
}