#define _CRT_SECURE_NO_WARNINGS
#//bc 153
#include<stdio.h>
int main() {
    int l, r, count = 0;
    scanf("%d %d", &l, &r);
    for (int i = l; i <= r; i++) {
        int val = i;
        while (val) {
            if (val % 10 == 2) count++;
            val /= 10;
        }
    }
    printf("%d", count);
    return 0;
}
