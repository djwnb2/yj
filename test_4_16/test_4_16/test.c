#define _CRT_SECURE_NO_WARNINGS
//26. ɾ�����������е��ظ���
int removeDuplicates(int* nums, int numsSize) {
    int src = 1;
    int num = numsSize;
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            num--;
            continue;
        }
        else
        {
            nums[src++] = nums[i];

        }
    }
    return num;

}
