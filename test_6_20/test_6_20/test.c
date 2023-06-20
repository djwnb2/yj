#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define N 1010

int n, m, p;
int steps[N][N];
int mx[N];

int main()
{
    int T;
    scanf("%d", &T);
    long long res = 0;
    for (int cases = 1; cases <= T; cases++)
    {
        memset(mx, 0, sizeof(mx));
        scanf("%d %d %d", &m, &n, &p);
        res = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                scanf("%d", &steps[i][j]);
                mx[j] = steps[i][j] > mx[j] ? steps[i][j] : mx[j];
            }
        }
        for (int j = 1; j <= n; j++)
        {
            int t = mx[j] - steps[p][j];
            if (t > 0)
            {
                res += t;
            }
        }
        printf("Case #%d: %lld\n", cases, res);
    }
    return 0;
}