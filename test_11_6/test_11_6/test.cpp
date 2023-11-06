#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string Add(const string& a, const string& b)
{
    string c;
    int t = 0;
    for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0 || t > 0; i--, j--)
    {
        if (i >= 0) t += (a[i] - '0');
        if (j >= 0) t += (b[j] - '0');
        c += ((t % 10) + '0');
        t /= 10;
    }
    reverse(c.begin(), c.end());
    return c;
}
int main()
{
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    cout << Add(a, b) << endl;
}