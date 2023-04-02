#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//BC137 ађСажизщОиеѓ
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr[1000] = { 0 };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i]);
            printf("%d ", arr[i]);

        }
        printf("\n");
    }
    return 0;
}