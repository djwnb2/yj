#define _CRT_SECURE_NO_WARNINGS
//������ 16.07. �����ֵ
class Solution {
public:
    int maximum(int a, int b) {
        if (a < b)
            return b;
        else
            return a;

        // ����ʹ����Ŀ�����
        return a < b ? b : a;
    }
};