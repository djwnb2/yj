#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
const int maxn = 10005;
int n, q, k, a[maxn];

int main()
{
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++)  scanf("%d", &a[i]);
    while (q--)
    {
        scanf("%d", &k);
        int l = 0, r = n - 1;
        while (l < r)
        {
            int mid = l + r >> 1;
            if (a[mid] < k) l = mid + 1;
            else  r = mid;
        }
        if (a[l] != k)
        {
            printf("-1 -1\n");
            continue;
        }
        int l1 = l, r1 = n;
        while (l1 + 1 < r1)
        {
            int mid = l1 + r1 >> 1;
            if (a[mid] <= k) l1 = mid;
            else  r1 = mid;

        }
        cout << l << l1 << endl;
      

    }
    return 0;



}