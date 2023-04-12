#define _CRT_SECURE_NO_WARNINGS
//7 - 1 �����ַ���
//int main() {
//    int repeat;
//    scanf("%d", &repeat);  // �����ظ�����
//    char ch, s[81];
//    for (int i = 0; i < repeat; ++i) {
//        scanf(" %c %[^\n]", &ch, s);  // �����ַ����ַ���
//        int len = strlen(s), index = -1;
//        for (int j = 0; j < len; ++j) {
//            if (s[j] == ch) {  // ����ҵ��ַ�
//                index = j;  // ��������±�
//            }
//        }
//        if (index != -1) {
//            printf("index = %d\n", index);
//        }
//        else {
//            printf("Not Found\n");
//        }
//    }
//    return 0;
//}

//7 - 2 �۰����
#include <stdio.h>

int main() {
    int n, a[15];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);  // ����Ҫ���ҵ���
    int left = 0, right = n - 1, mid, pos = -1;
    while (left <= right) {  // �۰�����㷨
        mid = (left + right) / 2;
        if (x == a[mid]) {
            pos = mid;
            break;
        }
        else if (x < a[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    if (pos != -1) {
        printf("It's position is %d!\n", pos + 1);
    }
    else {
        printf("No data!\n");
    }
    return 0;
}
