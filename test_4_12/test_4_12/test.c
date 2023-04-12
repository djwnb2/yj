#define _CRT_SECURE_NO_WARNINGS
//BC161 大吉大利，今晚吃鸡
#include<stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        int num = 1;

        for (i = 0; i < n; i++)
        {
            num *= 3;

        }
        printf("%d\n", num - 1);

    }
}

