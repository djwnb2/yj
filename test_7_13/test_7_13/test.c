#define _CRT_SECURE_NO_WARNINGS
//931. 下降路径最小和
int min(int a, int b) {
    return a < b ? a : b;
}

int minFallingPathSum(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize, m = *matrixColSize;
    int** dp = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        dp[i] = (int*)malloc(m * sizeof(int));
    }
    for (int i = 0; i < n; i++) {
        dp[0][i] = matrix[0][i];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int mn = dp[i - 1][j];
            if (j > 0) {
                mn = min(mn, dp[i - 1][j - 1]);
            }
            if (j < m - 1) {
                mn = min(mn, dp[i - 1][j + 1]);
            }
            dp[i][j] = mn + matrix[i][j];
        }
    }
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (dp[n - 1][i] < minVal) {
            minVal = dp[n - 1][i];
        }
    }
    for (int i = 0; i < n; i++) {
        free(dp[i]);
    }
    free(dp);
    return minVal;
}