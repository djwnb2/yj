#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
const int maxn = 1001;
int v[maxn];
int w[maxn];
int dp[maxn][maxn];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> v[i] >> w[i];


    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (j < v[i])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);

            }
        }
    cout << dp[n][m];


}