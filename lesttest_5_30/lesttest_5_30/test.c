#define _CRT_SECURE_NO_WARNINGS

#define _CRT_SECURE_NO_WARNINGS

//1. 任意输入一行字符，统计其中字母、数字、空格出现的个数。
#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];
    printf("请输入一行字符：");
    fgets(input, sizeof(input), stdin);

    int letterCount = 0;
    int digitCount = 0;
    int spaceCount = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i]))
            letterCount++;
        else if (isdigit(input[i]))
            digitCount++;
        else if (isspace(input[i]))
            spaceCount++;
    }

    printf("字母个数：%d\n", letterCount);
    printf("数字个数：%d\n", digitCount);
    printf("空格个数：%d\n", spaceCount);

    return 0;
}

//2.猜数字游戏。随机生成一个[1,100]之间的整数，提示用户输入一个数。
//若猜中，提示“恭喜猜对了”，结束程序；若猜错，提示“你的答案大于此数”或“你的答案小于此数”并提示再次输入，直到猜对为止；若输入0，也可结束游戏，并公布正确答案。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess;

    // 生成随机数
    srand(time(0));
    randomNumber = rand() % 100 + 1;

    printf("猜数字游戏开始！\n");

    while (1) {
        printf("请输入一个数（输入0结束游戏）：");
        scanf("%d", &guess);

        if (guess == 0) {
            printf("游戏结束！正确答案是：%d\n", randomNumber);
            break;
        }
        else if (guess == randomNumber) {
            printf("恭喜猜对了！\n");
            break;
        }
        else if (guess > randomNumber) {
            printf("你的答案大于此数\n");
        }
        else {
            printf("你的答案小于此数\n");
        }
    }

    return 0;
}
//3.产生30个[-50，50]之间的随机整数，将它们输出(每行显示5个数)，并求出其中正数、负数、0的个数，以及它们的平均值（平均值取2位小数）。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numbers[30];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    int positiveSum = 0, negativeSum = 0;

    srand(time(0));

    // 生成随机数并统计
    for (int i = 0; i < 30; i++) {
        numbers[i] = rand() % 101 - 50;

        if (numbers[i] > 0) {
            positiveCount++;
            positiveSum += numbers[i];
        }
        else if (numbers[i] < 0) {
            negativeCount++;
            negativeSum += numbers[i];
        }
        else {
            zeroCount++;
        }
    }

    // 输出随机数
    printf("随机数：\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", numbers[i]);
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    // 计算平均值
    float positiveAverage = (float)positiveSum / positiveCount;
    float negativeAverage = (float)negativeSum / negativeCount;

    // 输出统计结果
    printf("正数个数：%d\n", positiveCount);
    printf("负数个数：%d\n", negativeCount);
    printf("零的个数：%d\n", zeroCount);
    printf("正数平均值：%.2f\n", positiveAverage);
    printf("负数平均值：%.2f\n", negativeAverage);


}

//4.
#include <stdio.h>

int main() {
    int rows = 0; // 控制行数
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        // 打印空格
        for (int j = 0; j < i; j++) {
            printf("  ");
        }

        // 打印 #
        for (int k = 0; k < rows - i; k++) {
            printf("# ");
        }

        printf("\n");
    }

    return 0;
}



//6
#include <stdio.h>

int main() {
    int rows = 0;
    scanf("%d", &rows); // 控制行数

    for (int i = 0; i < rows; i++) {
        // 打印空格
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // 打印字母
        for (int k = 0; k <= i; k++) {
            printf("%c", 'A' + k);
        }

        printf("\n");
    }

    return 0;
}





//20
#include<stdio.h>
int main()
{
    int n = 4, i, j;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("%c", 'A' + j);
        printf("\n");
    }
    return 0;
}