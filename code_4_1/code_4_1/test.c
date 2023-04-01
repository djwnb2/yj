#define _CRT_SECURE_NO_WARNINGS
//BC136 KiKi≈–∂œ…œ»˝Ω«æÿ’Û
#include <stdio.h>
int main()
{
    int arr[10][10] = { 0 };
    int i = 0;
    int n = 0;
    int j = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 0)
    {
        printf("NO\n");
    }
    if (flag == 1)
    {
        printf("YES\n");
    }

}
