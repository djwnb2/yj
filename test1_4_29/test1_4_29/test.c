#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double funCos(double e, double x) {
    double a = 1;
    double v = 1;

    for (int i = 1;; i++) {
        // 计算当前项的值
        a = (-1) * a * x * x / (2 * i - 1) / (2 * i);
        v = v + a;

        // 如果当前项的绝对值小于 e，则不再继续累加
        if (fabs(a) < e) {
            return v;
        }
    }

    return v;
}

int main() {
    double e, x, v;
    scanf("%lf%lf", &e, &x);
    v = funCos(e, x);
    printf("%.6lf\n", v);

    return 0;
}
