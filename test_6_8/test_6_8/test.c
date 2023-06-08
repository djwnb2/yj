#define _CRT_SECURE_NO_WARNINGS
//2455. 可被三整除的偶数的平均值
int averageValue(int* nums, int numsSize) {
    int num = 0;
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 6 == 0)
        {
            sum += nums[i];
            num++;
        }
    }
    return sum > 0 ? sum / num : 0;

}