#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n);
        dp[0] = s[0] != '0';
        if (n == 1) return dp[0];

        if (s[0] != '0' && s[1] != '0') dp[1] += 1;
        int t = (s[0] - '0') * 10 + s[1] - '0';
        if (t >= 10 && t <= 26) dp[1] += 1;

        for (int i = 2; i < n; i++)
        {
            if (s[i] != '0') dp[i] += dp[i - 1];
            int t = (s[i - 1] - '0') * 10 + s[i] - '0';
            if (t >= 10 && t <= 26) dp[i] += dp[i - 2];
        }
        return dp[n - 1];
    }
};