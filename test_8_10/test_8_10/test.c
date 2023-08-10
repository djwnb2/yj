#define _CRT_SECURE_NO_WARNINGS

int cmp(void* a, void* b) {
    return *(int*)a - *(int*)b;
}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);
    *returnSize = 0;
    int index1 = 0;
    int index2 = 0;
    int* arr = (int*)malloc(sizeof(int) * (nums1Size + nums2Size));
    while (index1 < nums1Size && index2 < nums2Size)
    {
        int num1 = nums1[index1];
        int num2 = nums2[index2];
        if (num1 == num2)
        {
            if (!(*returnSize) || num1 != arr[(*returnSize) - 1])
            {
                arr[(*returnSize)++] = num1;
            }

            index1++;
            index2++;
        }

        else if (num1 < num2)
        {
            index1++;
        }
        else
        {
            index2++;
        }
    }
    return arr;
}