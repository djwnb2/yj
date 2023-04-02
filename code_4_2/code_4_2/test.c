#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//BC138 ¾ØÕó×ªÖÃ
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr[10][10] = { 0 };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
