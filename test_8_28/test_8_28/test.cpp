#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    string addStrings(string num1, string num2) {
        int end1 = num1.size() - 1, end2 = num2.size() - 1;
        string str;
        int next = 0;
        while (end1 >= 0 || end2 >= 0)
        {
            int x1 = end1 >= 0 ? num1[end1] - '0' : 0;
            int x2 = end2 >= 0 ? num2[end2] - '0' : 0;
            int res = next + x1 + x2;
            next = res / 10;
            res %= 10;

            str += '0' + res;
            --end1;
            --end2;
        }
        if (next == 1)
        {
            str += '1';
        }
        reverse(str.begin(), str.end());
        return str;
    }
};