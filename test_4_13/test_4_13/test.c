#define _CRT_SECURE_NO_WARNINGS
//BC162 Å£Å£µÄËØÊýÅÐ¶Ï
#include <stdio.h>

//int main()
//
//{
//    int n = 0;
//    scanf("%d", &n);
//    int a = 0;
//    while (n)
//    {
//        scanf("%d", &a);
//        n--;
//        int i = 0;
//        for (i = 2; i < a; i++)
//        {
//            if (a % i == 0)
//            {
//                printf("false\n"); break;
//            }
//        }
//        if (i == a) printf("true\n");
//    }
//
//    return 0;
//}



//BC163 Å£Å£µÄÌæ»»
int main() {
    int n;
    char a1, a2, a3, a4;
    scanf("%d %c %c %c %c\n", &n, &a1, &a2, &a3, &a4);
    char s[n];
    for (int i = 0; i < n; i++) {
        scanf("%c", &s[i]);
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == a1) s[i] = a2;
        if (s[i] == a3) s[i] = a4;
        printf("%c", s[i]);
    }
    return 0;
}