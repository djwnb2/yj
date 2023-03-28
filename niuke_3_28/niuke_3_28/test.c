#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// int is_primer(int num)
// {
//     int a = 0;
//     for (int i = 2; i < num; i++) {
//         if (num % i == 0) {
//             a++;  // 素数个数加1
//         }
//     }
//     if (a == 0) 
//     {
//         printf("%d是素数。\n", num);
//     }
//     else 
//     {
//         printf("%d不是素数。\n", num);
//     }
// }
//int main()
//{
//
//        int a = 0;  // 素数的个数
//        int num = 0;  // 输入的整数
//        printf("输入一个整数：");
//        scanf("%d", &num);
//        is_primer(num);
//        
//}



//int Fib(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n * Fib(n - 1);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c=Fib(n);
//	printf("%d", c);
//}


#include <stdio.h>

//void sort(int* a, int* b, int* c) {
//    int temp;
//    if (*a > *b) {
//        temp = *a;
//        *a = *b;
//        *b = temp;
//    }
//    if (*b > *c) {
//        temp = *b;
//        *b = *c;
//        *c = temp;
//    }
//    if (*a > *b) {
//        temp = *a;
//        *a = *b;
//        *b = temp;
//    }
//}
//
//int main() {
//    int a, b, c;
//    printf("Enter three integers: ");
//    scanf("%d %d %d", &a, &b, &c);
//    sort(&a, &b, &c);
//    printf("Sorted integers: %d %d %d\n", a, b, c);
//    return 0;
//}

#include <stdio.h>

void calculate_circle(float radius, float* area, float* circumference) {
    *area = 3.14 * radius * radius;
    *circumference = 2 * 3.14 * radius;
}

int main() {
    float radius, area, circumference;
    int num_circles;

    printf("Enter the number of circles: ");
    scanf("%d", &num_circles);

    for (int i = 0; i < num_circles; i++) {
        printf("Enter the radius of circle %d: ", i + 1);
        scanf("%f", &radius);

        calculate_circle(radius, &area, &circumference);

        printf("Circle %d:\n", i + 1);
        printf("Area: %.2f\n", area);
        printf("Circumference: %.2f\n", circumference);
    }

    return 0;
}
