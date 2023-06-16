#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int main() {
    const int MAX_N = 1e5 + 10;
    vector<int> dp(MAX_N, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i < MAX_N; i++) {
        dp[i] = min(dp[i], dp[i - 1] + 1);
        for (int j = i + i, k = 1; j < MAX_N; j += i, k++) {
            dp[j] = min(dp[j], dp[i] + 4 + 2 * k);
        }
    }

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int n;
        cin >> n;
        cout << "Case #" << t << ": " << dp[n] << endl;
    }

    return 0;
}
