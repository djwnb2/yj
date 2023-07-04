#define _CRT_SECURE_NO_WARNINGS

int matrixSum(int** nums, int numsSize, int* numsColSize) {
    int score = 0;
    int m = numsColSize[0];
    while (m >= 0) {
        int ans[numsSize];
        for (int k = 0; k < numsSize; k++) {
            ans[k] = 0;
        }
        int p = 0;
        for (int i = 0; i < numsSize; i++) {
            int Rmax = 0;
            int index = 0;
            for (int j = 0; j < numsColSize[0]; j++) {
                if (nums[i][j] > Rmax) {
                    Rmax = nums[i][j];
                    index = j;
                }
            }
            nums[i][index] = 0;
            ans[p] = Rmax;
            p++;
        }
        int max = 0;
        for (int n = 0; n < numsSize; n++) {
            if (ans[n] > max)
                max = ans[n];
        }
        score += max;
        m--;
    }
    return score;
}

