#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//BC145 [NOIP2008]笨小猴
#include<string.h>
int main()
{
    int sum = 0;
    int minn = 9;
    int maxn = 0;
    char ch[10] = { 0 };
    scanf("%s", &ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        sum = 0;
        for (int j = 0; j < strlen(ch); j++)
        {
            if (ch[i] == ch[j])
            {
                sum++;
            }
        }
        if (sum > maxn)
        {
            maxn = sum;
        }
        if (sum < minn)
        {
            minn = sum;
        }


    }
    int m = maxn - minn;
    int flag = 1;
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)  //除了1和本身
            flag = 0;
    }
    if (flag == 1 && m != 1 && m != 0)
    {
        printf("Lucky Word\n");
        printf("%d", m);
    }
    else
    {
        printf("No Answer\n");
        printf("0");

    }



}

