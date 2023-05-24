#define _CRT_SECURE_NO_WARNINGS
//剑指 Offer II 072. 求平方根
int mySqrt(int x)
{
    int low = 0;
    int high = x;
    int mid;

    while (low <= high) {
        mid = (high - low) / 2 + low;
        if ((pow(mid, 2) <= x) && (pow((mid + 1), 2) > x)) {
            return mid;
        }
        else if ((pow(mid, 2) <= x) && (pow((mid + 1), 2) <= x)) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return mid;
}
