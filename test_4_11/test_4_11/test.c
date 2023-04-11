#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
    int n = 0;
    int x = 0;
    int a, max = 0;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        x = sqrt(a);
        if (a == pow(x, 2))
            continue;
        else
        {
            if (a > max)
            {
                max = a;
            }
        }

    }
    printf("%d", max);
    return 0;
}
