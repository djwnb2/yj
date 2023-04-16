#define _CRT_SECURE_NO_WARNINGS
//9. 回文数
bool isPalindrome(int x) {
    //排除x为负数的情况
    if (x < 0)
    {
        return 0;
    }

    //把x变成字符数组，首尾缩进比较
    char* p = malloc(sizeof(char) * 11);//p的长度为x最大能表示值的位数。int型变量最大能表示的十进制数是2147483647，只有11位
    int i;
    for (i = 0; x != 0; i++)
    {
        p[i] = x % 10;
        x = x / 10;
    }

    int left = 0;
    int right = i - 1;
    while (left < right && p[left] == p[right])
    {
        left++;
        right--;
    }

    if (left >= right)
    {
        return 1;
    }
    else
    {
        return 0;
    }


