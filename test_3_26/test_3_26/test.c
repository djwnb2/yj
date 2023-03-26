#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n = 0;
    int arr[100] = { 0 };
    //多组输入
    while (~scanf("%d", &n))
    {
        //将2~n的数存起来
        int i = 0; //循环变量
        for (i = 2; i <= n; i++)
        {
            arr[i] = i;
        }
        //开始筛选
        for (i = 2; i <= n; i++)
        {
            int j = 0;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    arr[i] = 0;
                }
            }
        }
        int cnt = 0;
        //输出
        for (i = 2; i <= n; i++)
        {
            if (arr[i] != 0)
            {
                printf("%d ", arr[i]);
            }
            else
            {
                cnt++;
            }
        }
        printf("\n%d\n", cnt);
    }

    return 0;
}
