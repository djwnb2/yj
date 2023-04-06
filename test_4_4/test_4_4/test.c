#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////BC145 [NOIP2008]笨小猴
//#include<string.h>
//int main()
//{
//    int sum = 0;
//    int minn = 9;
//    int maxn = 0;
//    char ch[10] = { 0 };
//    scanf("%s", &ch);
//    for (int i = 0; i < strlen(ch); i++)
//    {
//        sum = 0;
//        for (int j = 0; j < strlen(ch); j++)
//        {
//            if (ch[i] == ch[j])
//            {
//                sum++;
//            }
//        }
//        if (sum > maxn)
//        {
//            maxn = sum;
//        }
//        if (sum < minn)
//        {
//            minn = sum;
//        }
//
//
//    }
//    int m = maxn - minn;
//    int flag = 1;
//    for (int i = 2; i < m; i++)
//    {
//        if (m % i == 0)  //除了1和本身
//            flag = 0;
//    }
//    if (flag == 1 && m != 1 && m != 0)
//    {
//        printf("Lucky Word\n");
//        printf("%d", m);
//    }
//    else
//    {
//        printf("No Answer\n");
//        printf("0");
//
//    }
//
//
//
//}
//

#include<stdio.h>
//int main()
//{
//	int a = -3;
//	unsigned int  b = 2;
//	long c = a + b;
//	printf("%ld", c);
//}
//int f(int i)
//{
//	return (i - 2) ? i * f(i - 1) : 3;
//}
//
//int main()
//{
//	int i;
//	i = f(f(2));
//	printf("%d", i);
//}
//
#include<stdio.h>
int del(char arr1[], char arr2[])
{
    int i, j, k = 0;
    for (i = 0; arr2[i] < '\0'; i++)
    {
        for (j = 0; arr1[j] < '\0'; j++)
        {
            if (arr2[i] == arr1[j])
            {
                for (k = j; arr1[k] < '\0'; k++)
                {
                    arr1[k] = arr1[k + 1];
                }

            }
        }
    }

}
int main()
{
    char arr1[100] = { 0 };
    char arr2[100] = { 0 };
    gets(arr1);
    scanf("%s", arr2);
    del(arr1, arr2);
    printf("%s", arr1);
}