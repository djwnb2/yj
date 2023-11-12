#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>
using namespace std;
const int N = 5e3 + 10;
int n, dp[N][N], res;

int main() {
    string s;
    cin >> s;
    n = s.size();
    for (int len = 2; len <= n; ++len) {
        for (int l = 0; l + len - 1 < n; ++l) {
            int r = l + len - 1;
            if (s[l] > s[r])dp[l][r] = 1;
            else if (s[l] == s[r])dp[l][r] = dp[l + 1][r - 1];
            res += (dp[l][r] == 1);
        }
    }
    cout << res << endl;
    return 0;
}

