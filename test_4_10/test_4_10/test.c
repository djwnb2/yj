#define _CRT_SECURE_NO_WARNINGS
//BC154 Å£Å£µÄ¶ÌÐÅ
#include<stdio.h>
int main() 
{
    unsigned int n, val;
    float sum = 0.0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d ", &val);
        if (val > 60) sum += 0.2;
        else sum += 0.1;
    }
    printf("%.1f", sum);
    return 0;
}

