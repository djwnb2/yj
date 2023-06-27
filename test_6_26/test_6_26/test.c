#define _CRT_SECURE_NO_WARNINGS
//2485. 找出中枢整数
int pivotInteger(int n) {
    int i = 1, j = n;
    int left = 0, right = 0;
    while (i < j)
    {
        if (left <= right)
        {
            left = left + i;
            i++;
        }
        else
        {
            right = right + j;
            j--;
        }
    }
    if (left == right)
        return i;
    else
        return -1;
}