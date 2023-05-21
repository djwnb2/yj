#define _CRT_SECURE_NO_WARNINGS
//ÃæÊÔÌâ 16.05. ½×³ËÎ²Êı
int trailingZeroes(int n) {
    int res = 0;
    while (n)
    {
        n /= 5;
        res += n;
    }
    return res;
}