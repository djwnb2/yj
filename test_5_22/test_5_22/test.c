#define _CRT_SECURE_NO_WARNINGS
//剑指 Offer II 088. 爬楼梯的最少成本
int minCostClimbingStairs(int* cost, int costSize) {
    int dp[costSize + 1];
    dp[0] = dp[1] = 0;
    for (int i = 2; i <= costSize; i++)
    {
        dp[i] = fmin(dp[i - 2] + cost[i - 2], dp[i - 1] + cost[i - 1]);
    }
    return dp[costSize];
}