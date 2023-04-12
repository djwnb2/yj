#define _CRT_SECURE_NO_WARNINGS
//7 - 1 查找字符串
//int main() {
//    int repeat;
//    scanf("%d", &repeat);  // 读入重复次数
//    char ch, s[81];
//    for (int i = 0; i < repeat; ++i) {
//        scanf(" %c %[^\n]", &ch, s);  // 读入字符和字符串
//        int len = strlen(s), index = -1;
//        for (int j = 0; j < len; ++j) {
//            if (s[j] == ch) {  // 如果找到字符
//                index = j;  // 更新最大下标
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

//7 - 2 折半查找
#include <stdio.h>

int main() {
    int n, a[15];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);  // 输入要查找的数
    int left = 0, right = n - 1, mid, pos = -1;
    while (left <= right) {  // 折半查找算法
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
