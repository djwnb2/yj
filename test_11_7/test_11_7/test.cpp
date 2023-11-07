#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>div(vector<int>& a, int b, int& r)
{
    vector<int> C;
    for (int i = 0; i < a.size(); i++)
    {
        r = r * 10 + a[i];
        C.push_back(r / b);
        r %= b;
    }
    reverse(C.begin(), C.end());
    while (C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}

int main()
{
    string a;
    int b, r = 0;
    vector<int> A;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) A.push_back(a[i] - '0');
    auto C = div(A, b, r);
    for (int i = C.size() - 1; i >= 0; i--)  cout << C[i];

    cout << endl << r;
    cout << endl;
    return 0;
}