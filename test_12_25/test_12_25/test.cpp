#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1e5 + 10;
ll dp[35][2][2];
int a[35], b[35];
ll dfs(int pos, int pre, int limit) {
    if (pos == -1) return 1;
    if (!limit && dp[pos][pre] != -1) return dp[pos][pre];
    int up = limit ? a[pos] : 1;
    ll ans = 0;
    for (int i = 0; i <= up; i++) {
        if (pre == 1 && i == 1) continue;
        if (i == 1 && b[pos] == 0) ans += (1LL << (pos));
        ans += dfs(pos - 1, i, limit && i == a[pos]);
    }
    if (!limit) dp[pos][pre] = ans;
    return ans;
}
ll solve(ll x, ll y) {
    for (int i = 30; i >= 0; i--) {
        a[i] = ((x >> i) & 1);
        b[i] = ((y >> i) & 1);
    }
    return dfs(30, 0, 1);
}
int main() {
    memset(dp, -1, sizeof(dp));
    int T;
    scanf("%d", &T);
    while (T--) {
        ll x, y;
        scanf("%lld%lld", &x, &y);
        printf("%lld\n", solve(y, x));
    }
    return 0;
}
