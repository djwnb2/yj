#define _CRT_SECURE_NO_WARNINGS

int* sumZero(int n, int* returnSize) {
    int* arr = (int*)malloc(sizeof(int) * n);
    *returnSize = n;
    int i, max = n / 2;
    for (i = 0; i < n; i++)
    {
        arr[i] = -max;
        arr[n - 1] = max;
        max--;
        n--;
    }
    if (i == max)
    {
        arr[i] = 0;
    }
    return arr;
}