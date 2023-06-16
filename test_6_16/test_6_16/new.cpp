#define _CRT_SECURE_NO_WARNINGS
//AcWing 4740. ≈‹»¶
#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        int L, n, a, sum = 0;
        ll cnt = 0;
        char op;
        scanf("%d%d", &L, &n);
        while (n--)
        {
            scanf("%d %c", &a, &op);
            if (op == 'C')
            {
                sum += a;
            }
            else
            {
                sum -= a;
            }
            cnt += abs(sum) / L;
            sum %= L;
        }
        printf("Case #%d: %lld\n", i, cnt);
    }
    return 0;
}

