#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;
int main()
{
    int n, m = 0;
    cin >> n >> m;
    int s1, s2;
    s2 = (m + 1) * (n + 1) * m * n / 4;
    for (; m >= 1 && n >= 1; m--, n--) {
        s1 += m * n;
    }
    cout << s1 << " " << s2 - s1;
    return 0;
}