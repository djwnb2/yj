#define _CRT_SECURE_NO_WARNINGS

int* sortArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int step = numsSize / 2;
    while (step > 0) {
        //!
        for (int i = step; i < numsSize; ++i) {
            int tmp = nums[i];
            int j = i - step;
            while (j >= 0 && tmp < nums[j]) {
                nums[j + step] = nums[j];
                j -= step;
            }
            nums[j + step] = tmp;
        }
        step = step / 2;
    }
    return nums;
}