#define _CRT_SECURE_NO_WARNINGS
//405. 数字转换为十六进制数
char* toHex(int num) {
    int i = 0;
    char* str = (char*)malloc(sizeof(char) * 32);
    unsigned int newnum = (unsigned int)num;
    if (newnum == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
    while (newnum >= 1)
    {

        int flag = newnum % 16;
        newnum /= 16;
        if (flag <= 9)
        {
            str[i] = flag + '0';
            i++;
        }
        else
        {
            str[i] = flag + 'a' - 10;
            i++;
        }
    }
    int left = 0;
    int right = i - 1;
    str[i] = '\0';
    while (left < right)
    {
        char cur = str[left];
        str[left] = str[right];
        str[right] = cur;
        right--;
        left++;
    }
    return str;
}
