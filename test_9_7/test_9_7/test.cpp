#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    bool F(vector<int>& ranks, int cars, long long m) {
        long long s = 0;
        for (auto& x : ranks)
            s += sqrt(m / x);
        return s >= cars;
    }


    long long repairCars(vector<int>& ranks, int cars) {
        long long l = 1, r = 1e14, m;
        while (l <= r)
        {
            m = l + (r - l) / 2;
            if (F(ranks, cars, m))
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return l;
    }
};