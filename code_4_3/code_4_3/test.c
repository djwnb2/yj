#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//BC143 [NOIP2018]标题统计

int main()
{
    int sum = 0;
    int i = 0;
    char s[100];
    gets(s);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum++;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            sum++;
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            sum++;
        }

    }
    printf("%d", sum);
}
