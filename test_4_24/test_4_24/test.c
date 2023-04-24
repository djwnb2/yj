#define _CRT_SECURE_NO_WARNINGS
//278. 第一个错误的版本
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int left = 0;
    int right = n;
    int mid = 0;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if (isBadVersion(mid))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}