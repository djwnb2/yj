#define _CRT_SECURE_NO_WARNINGS
//BC135 ÕºœÒœ‡À∆∂»
#include <stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    int i, j = 0;
    scanf("%d %d", &n, &m);
    int arr1[100][100] = { 0 };
    int arr2[100][100] = { 0 };
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i][j] == arr2[i][j])
            {
                count++;
            }
        }
    }
    float per = 100.0 * count / (m * n);
    printf("%.2f", per);
    return 0;


}