#define _CRT_SECURE_NO_WARNINGS
//1342. �����ֱ�� 0 �Ĳ�������

int numberOfSteps(int num) {
    int count = 0;
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            num /= 2;
            count++;
        }
        else
        {
            num = num - 1;
            count++;
        }
    }
    return count;
}