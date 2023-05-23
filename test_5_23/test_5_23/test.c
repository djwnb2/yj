#define _CRT_SECURE_NO_WARNINGS
//1716. 计算力扣银行的钱

int totalMoney(int n) {
    int week = 1;
    int day = 1;
    int nums = 0;
    for (int i = 0; i < n; i++)
    {
        nums += week + day - 1;
        day++;
        if (day == 8)
        {
            day = 1;
            week++;
        }
    }
    return nums;
}