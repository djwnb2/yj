#define _CRT_SECURE_NO_WARNINGS
//258. ��λ���
int addDigits(int num) {
    while (num >= 10)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}
