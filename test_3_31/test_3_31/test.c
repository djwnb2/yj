#define _CRT_SECURE_NO_WARNINGS
//27. ÒÆ³ýÔªËØ
int removeElement(int* nums, int numsSize, int val)
{
    int src = 0;
    int dest = 0;
    while (src < numsSize)
    {
        if (nums[src] != val)
        {
            nums[dest++] = nums[src++];
        }
        else
        {
            src++;
        }

    }
    return dest;
}