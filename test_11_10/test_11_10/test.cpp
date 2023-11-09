#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
const int N = 10e5 + 10;
int a[N], b[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int i = 0;
    for (int j = 0; j < m; j++)
    {
        if (i < n && a[i] == b[j]) i++;

    }
    if (i == n) cout << "Yes" << endl;
    else cout << "No" << endl;

}