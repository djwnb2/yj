#define _CRT_SECURE_NO_WARNINGS
//BC149 ºÚ–¥µ•¥ 
#include <stdio.h>
int main()
{
    char arr[100] = { 0 };
    while (scanf("%s", arr) != EOF)
    {
        if (arr[0] >= 65 && arr[0] <= 90)
            printf("%c", arr[0]);
        else
            printf("%c", arr[0] - 32);
    }
    return 0;
}