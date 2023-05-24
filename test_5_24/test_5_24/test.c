#define _CRT_SECURE_NO_WARNINGS
//剑指 Offer 17. 打印从1到最大的n位数
int* printNumbers(int n, int* returnSize)
{
    int nums = 1;
    while (n > 0)
    {
        nums *= 10;
        n--;
    }
    int* ans = (int*)malloc(sizeof(int) * (nums - 1));
    for (int i = 1; i < nums; i++)
    {
        ans[i - 1] = i;
    }
    *returnSize = nums - 1;
    return ans;
    free(ans);
}