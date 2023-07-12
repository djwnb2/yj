#define _CRT_SECURE_NO_WARNINGS

int alternateDigitSum(int n) {
    int res = 0;
    int sign = 1;
    while (n > 0)
    {
        res += n % 10 * sign;
        sign = -sign;
        n /= 10;
    }
    return res * (-sign);
}