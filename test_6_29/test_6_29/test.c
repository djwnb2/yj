#define _CRT_SECURE_NO_WARNINGS
//JZ17 打印从1到最大的n位数
int* printNumbers(int n, int* returnSize) {
    *returnSize = pow(10, n) - 1;
    int* arr = (int*)malloc(*returnSize * sizeof(int));
    for (int i = 0; i < *returnSize; i++)
    {
        *(arr + i) = i + 1;
    }
    return arr;
}