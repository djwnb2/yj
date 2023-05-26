#define _CRT_SECURE_NO_WARNINGS
//面试题 16.07. 最大数值
class Solution {
public:
    int maximum(int a, int b) {
        if (a < b)
            return b;
        else
            return a;

        // 或者使用三目运算符
        return a < b ? b : a;
    }
};