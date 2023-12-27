#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 20;
//
////primes���������������
//int primes[N], cnt;
////st[i], iΪ������Ϊfalse����Ϊtrue
//bool st[N];
//
//void get_primes(int n)
//{
//    for (int i = 2; i <= n; i++)
//    {
//        if (!st[i]) primes[cnt++] = i;
//        //����primes[0]Ϊn��С��������,iΪ����������
//        //��֪��primes[i]��i>0,������ѭ�����������ı�ǡ�
//        for (int j = 0; primes[j] <= n / i; j++)
//        {
//            //primes ����
//            //���;primes[j]һ����primes[j]*i����С������
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