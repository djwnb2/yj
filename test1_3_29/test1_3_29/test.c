#define _CRT_SECURE_NO_WARNINGS
//BC133 »ØÐÍ¾ØÕó
//#include <stdio.h>
//int main()
//{
//    int i, j, k, n;
//    int p, q;
//    int a[20][20];
//    int count;
//    scanf("%d", &n);
//    count = 0;
//    p = 0;
//    q = n - 1;
//    while (count < n * n)
//    {
//        for (i = p; i <= q; i++)
//            a[p][i] = ++count;
//        for (i = p + 1; i <= q; i++)
//            a[i][q] = ++count;
//        for (i = q - 1; i >= p; i--)
//            a[q][i] = ++count;
//        for (i = q - 1; i >= p + 1; i--)
//            a[i][p] = ++count;
//        ++p;
//        --q;
//
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//            printf("%d ", a[i][j]);
//        printf("\n");
//    }
//
//}