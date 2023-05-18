#define _CRT_SECURE_NO_WARNINGS
//441. ≈≈¡–”≤±“
int arrangeCoins(int n) {
    int left = 1, right = n;
    while (left < right) {
        int mid = (right - left + 1) / 2 + left;
        if ((long long)mid * (mid + 1) <= (long long)2 * n) {
            left = mid;
        }
        else {
            right = mid - 1;
        }
    }
    return left;
}