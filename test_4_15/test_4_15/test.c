#define _CRT_SECURE_NO_WARNINGS
//BC164 Å£Å£µÄËÄÒ¶Ãµ¹åÊı
#include<math.h>

#include<stdio.h>
int main() {
    int l, r;
    scanf("%d %d", &l, &r);
    for (int i = l; i <= r; i++) {
        int val = i, temp = 0;
        while (val) {
            temp += pow(val % 10, 4);
            val /= 10;
        }
        if (temp == i) printf("%d ", i);
    }
    return 0;
}


