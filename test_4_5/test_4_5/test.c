#define _CRT_SECURE_NO_WARNINGS
//BC147 ¾ºÑ¡Éç³¤
#include <stdio.h>

int main()
{
    char n;
    int a = 0;
    int b = 0;
    while (scanf("%c", &n) != EOF)
    {
        if (n == '0')
        {
            break;
        }
        if (n == 'A')
            a++;
        else
            b++;

    }
    if (a > b)
    {
        printf("A");
    }
    else if (a < b)
    {
        printf("B");
    }
    else
    {
        printf("E");
    }

}