#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int fib(int n) {
        int MOD = 1000000007;
        if (n < 2)
        {
            return n;
        }
        int p = 0, q = 0, r = 1;
        for (int i = 2; i <= n; i++)
        {
            p = q;
            q = r;
            r = (p + q) % MOD;
        }
        return r;
    }
};