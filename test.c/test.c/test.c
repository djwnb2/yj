#define _CRT_SECURE_NO_WARNINGS
//1486. 数组异或操作
int xorOperation(int n, int start) {
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        num ^= (start + 2 * i);
    }
    return num;

}