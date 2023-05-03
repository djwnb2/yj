#define _CRT_SECURE_NO_WARNINGS
//66. 加一
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = 0;
    for (i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] != 9)
        {
            digits[i]++;
            break;
        }
        digits[i] = 0;
    }//前面的部分

    if (digits[0] == 0)
    {
        int* tmp = 0;
        int k = 0;
        int size = digitsSize + 1;
        k = size - 1;
        tmp = (int*)malloc(size * sizeof(int));
        while (k != 0)
        {
            tmp[k--] = 0;
        }
        tmp[k] = 1;
        *returnSize = size;
        return tmp;
    }
    *returnSize = digitsSize;
    return digits;

}