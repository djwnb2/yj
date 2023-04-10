#define _CRT_SECURE_NO_WARNINGS
//BC155 Å£Å£µÄËØÊýºÍ
#include<stdio.h>
int main() {
    int l, r, sum = 0, count = 0;
    scanf("%d %d", &l, &r);
    for (int i = l; i <= r; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) count++;
        }
        if (count == 2) sum += i;
        count = 0;
    }
    printf("%d", sum);
    return 0;
}

