#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    char arr[n + 1];
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &arr[i]);
    }
    int l = 0;
    int t = 0;
    char c1, c2;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &l, &t);
        getchar();
        scanf("%c", &c1);
        getchar();
        scanf("%c", &c2);
        int j = 0;
        for (j = l - 1; j < t; j++)
        {
            if (arr[j] == c1)
            {
                arr[j] = c2;
            }


        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != '\0')
        {
            printf("%c", arr[i]);
        }
    }



}