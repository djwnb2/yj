#define _CRT_SECURE_NO_WARNINGS
//BC152 The Biggest Water Problem
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n / 10 != 0)
    {
        n = n / 10 + n % 10;
    }
    printf("%d", n);
}