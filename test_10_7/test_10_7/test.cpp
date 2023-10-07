#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 2, INT_MAX));
        for (int j = 0; j < n + 2; j++) dp[0][j] = 0;

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i - 1][j + 1])) + matrix[i - 1][j - 1];

        int ret = INT_MAX;
        for (int j = 1; j <= n; j++)
        {
            ret = min(ret, dp[n][j]);
        }
        return ret;
    }
};