#define _CRT_SECURE_NO_WARNINGS

int smallestEvenMultiple(int n) {
    if (n == 1)
    {
        return 2;
    }
    else if (n % 2 == 0)
    {
        return n;
    }
    else
    {
        return n * 2;
    }
}