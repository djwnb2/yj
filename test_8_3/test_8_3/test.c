#define _CRT_SECURE_NO_WARNINGS

int largestSumAfterKNegations(int* nums, int numsSize, int k) {
    int sum = 0;

    while (k--)
    {
        int min = nums[0];//保存最小的数
        int sit = 0;//保存最小数的下标
        for (int i = 0; i < numsSize; i++)
        {
            if (min > nums[i])
            {
                min = nums[i];
                sit = i;
            }
        }
        nums[sit] = -nums[sit]; printf("%d", nums[sit]);
    }

    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }
    return sum;
}

