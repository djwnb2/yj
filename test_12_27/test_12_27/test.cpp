#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 20;
//
////primes数组用来存放质数
//int primes[N], cnt;
////st[i], i为质数则为false否则为true
//bool st[N];
//
//void get_primes(int n)
//{
//    for (int i = 2; i <= n; i++)
//    {
//        if (!st[i]) primes[cnt++] = i;
//        //假设primes[0]为n最小的质因子,i为最大的因数，
//        //易知若primes[i]中i>0,则会进入循环后产生多余的标记。
//        for (int j = 0; primes[j] <= n / i; j++)
//        {
//            //primes 质数
//            //标记;primes[j]一定是primes[j]*i的最小质因子
//            st[primes[j] * i] = true;
//            
//            if (i % primes[j] == 0) break;
//        }
//    }
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    get_primes(n);
//    cout << cnt << endl;
//    return 0;
//}

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 1; i <= n / i; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                if (n / i != i)
                    v.push_back(n / i);
            }
        }
        sort(v.begin(), v.end());
        for (auto x : v) cout << x << " ";
        cout << endl;
    }

}