#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<stdio.h>

using namespace std;
double x;
int main()
{
    cin >> x;
    double l = -10000, r = 10000;
    while (r - l > 1e-8)
    {
        double mid = (l + r) / 2;
        if (mid * mid * mid < x) l = mid;
        else r = mid;
    }
    printf("%6f", r);
    return 0;
}