#define _CRT_SECURE_NO_WARNINGS

#define _CRT_SECURE_NO_WARNINGS

//1. ��������һ���ַ���ͳ��������ĸ�����֡��ո���ֵĸ�����
#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];
    printf("������һ���ַ���");
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

    printf("��ĸ������%d\n", letterCount);
    printf("���ָ�����%d\n", digitCount);
    printf("�ո������%d\n", spaceCount);

    return 0;
}

//2.��������Ϸ���������һ��[1,100]֮�����������ʾ�û�����һ������
//�����У���ʾ����ϲ�¶��ˡ��������������´���ʾ����Ĵ𰸴��ڴ���������Ĵ�С�ڴ���������ʾ�ٴ����룬ֱ���¶�Ϊֹ��������0��Ҳ�ɽ�����Ϸ����������ȷ�𰸡�

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess;

    // ���������
    srand(time(0));
    randomNumber = rand() % 100 + 1;

    printf("��������Ϸ��ʼ��\n");

    while (1) {
        printf("������һ����������0������Ϸ����");
        scanf("%d", &guess);

        if (guess == 0) {
            printf("��Ϸ��������ȷ���ǣ�%d\n", randomNumber);
            break;
        }
        else if (guess == randomNumber) {
            printf("��ϲ�¶��ˣ�\n");
            break;
        }
        else if (guess > randomNumber) {
            printf("��Ĵ𰸴��ڴ���\n");
        }
        else {
            printf("��Ĵ�С�ڴ���\n");
        }
    }

    return 0;
}
//3.����30��[-50��50]֮���������������������(ÿ����ʾ5����)�����������������������0�ĸ������Լ����ǵ�ƽ��ֵ��ƽ��ֵȡ2λС������

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numbers[30];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    int positiveSum = 0, negativeSum = 0;

    srand(time(0));

    // �����������ͳ��
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

    // ��������
    printf("�������\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", numbers[i]);
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    // ����ƽ��ֵ
    float positiveAverage = (float)positiveSum / positiveCount;
    float negativeAverage = (float)negativeSum / negativeCount;

    // ���ͳ�ƽ��
    printf("����������%d\n", positiveCount);
    printf("����������%d\n", negativeCount);
    printf("��ĸ�����%d\n", zeroCount);
    printf("����ƽ��ֵ��%.2f\n", positiveAverage);
    printf("����ƽ��ֵ��%.2f\n", negativeAverage);


}

//4.
#include <stdio.h>

int main() {
    int rows = 0; // ��������
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        // ��ӡ�ո�
        for (int j = 0; j < i; j++) {
            printf("  ");
        }

        // ��ӡ #
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
    scanf("%d", &rows); // ��������

    for (int i = 0; i < rows; i++) {
        // ��ӡ�ո�
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // ��ӡ��ĸ
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