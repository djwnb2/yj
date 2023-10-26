#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int countDigits(int num) {
        int t = num, res = 0;
        while (t) {
            if (num % (t % 10) == 0) {
                res += 1;
            }
            t /= 10;
        }
        return res;
    }
};
