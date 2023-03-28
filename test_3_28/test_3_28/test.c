#define _CRT_SECURE_NO_WARNINGS
//BC128 班级成绩输入输出
#include<stdio.h>
int main()
{
    double arr[5][5];
    for (int i = 0; i < 5; ++i)
    {
        scanf("%lf %lf %lf %lf %lf", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
    }
    for (int i = 0; i < 5; ++i)
    {
        double sum = 0;
        for (int j = 0; j < 5; ++j)
        {
            printf("%.1f ", arr[i][j]);
            sum += arr[i][j];
        }
        printf("%.1f\n", sum);
    }
    return 0;
}
