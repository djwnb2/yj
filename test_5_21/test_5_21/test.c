#define _CRT_SECURE_NO_WARNINGS
//������ 16.05. �׳�β��
int trailingZeroes(int n) {
    int res = 0;
    while (n)
    {
        n /= 5;
        res += n;
    }
    return res;
}