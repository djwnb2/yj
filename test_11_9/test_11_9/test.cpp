#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<stdio.h>

using namespace std;
const int N = 100000;
int a[N], b[N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i] - a[i - 1];

    }
    int l, r, c;
    while (m--)
    {
        scanf("%d %d %d", &l, &r, &c);
        b[l] += c;
        b[r + 1] -= c;

    }
    for (int i = 1; i <= n; i++)
    {
        a[i] = b[i] + a[i - 1];
        printf("%d ", a[i]);
    }
    return 0;
}