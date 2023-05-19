#define _CRT_SECURE_NO_WARNINGS
//2169. µÃµ½ 0 µÄ²Ù×÷Êı
int countOperations(int num1, int num2) {
    int nums = 0;
    while (!(num1 == 0 || num2 == 0))
    {
        if (num1 > num2)
        {
            num1 = num1 - num2;
            nums++;

        }
        else
        {
            num2 = num2 - num1;
            nums++;
        }

    }
    return nums;
}