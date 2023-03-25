#define _CRT_SECURE_NO_WARNINGS
//BC126 Ğ¡ÀÖÀÖ²éÊı×Ö
#include<stdio.h>
int main()
{
    int num = 0;
    int arr[100] = { 0 };
    int count = 0;
    int find_num = 0;
    scanf("%d ", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &find_num);
    int i = 0;
    for (i = 0; i < num; i++)
    {
        if (find_num == arr[i])
        {
            count++;
        }
    }

    printf("%d\n", count);


}