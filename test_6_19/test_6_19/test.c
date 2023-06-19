#define _CRT_SECURE_NO_WARNINGS
//1262. 可被三整除的最大和
int maxSumDivThree(int* nums, int numsSize) {
    long total = 0, minus;
    long d1 = INT_MAX, d2 = INT_MAX, d3 = INT_MAX;
    for (int i = 0; i < numsSize; i++) {
        total += nums[i];
    }if (total % 3 == 0)return total;
    minus = total % 3;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 3 == minus) {
            d1 = fmin(d1, nums[i]);
        }
        else if (nums[i] % 3 != 0) {
            if (nums[i] < d2) {
                d3 = d2;
                d2 = nums[i];
            }
            else if (nums[i] < d3) {
                d3 = nums[i];
            }
        }
    }total = total - fmin(d1, d2 + d3);
    return total < 0 ? 0 : (int)total;
}

