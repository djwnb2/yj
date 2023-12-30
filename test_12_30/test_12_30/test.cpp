#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>
using namespace std;
const int MAX = 200007;
const int MOD = 1000000007;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string res = "";
    while (!s.empty())
    {
        int x;
        if (s.back() == 'a' || s.back() == 'e') x = 2;
        else x = 3;
        while (x--)
        {
            res += s.back();
            s.pop_back();
        }
        res += ".";

    }
    res.pop_back();
    reverse(res.begin(), res.end());
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}