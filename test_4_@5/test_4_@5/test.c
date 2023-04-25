#define _CRT_SECURE_NO_WARNINGS
//27. ÒÆ³ýÔªËØ
int removeElement(int* nums, int numsSize, int val) {
    int ret = 0;
    int pos = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[pos++] = nums[i];
            ret++;
        }

    }

    return ret;
}

