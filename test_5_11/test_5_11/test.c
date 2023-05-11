#define _CRT_SECURE_NO_WARNINGS
//1342. 将数字变成 0 的操作次数

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