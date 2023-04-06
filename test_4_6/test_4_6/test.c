#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    long long int sum = 0;
    char arr[1000000] = { 0 };
    scanf("%s", arr);
    int str = strlen(arr)  
    for (int i = 0; i < str; i++)
    {
        sum = sum + (arr[i] - '0');

    }
    printf("%lld", sum);

}
