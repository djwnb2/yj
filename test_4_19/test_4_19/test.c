#define _CRT_SECURE_NO_WARNINGS
//58. ���һ�����ʵĳ���
int lengthOfLastWord(char* s) {

    int num = 0;
    int i = 0;
    int len = strlen(s);
    for (i = len - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            num++;
        }
        if (s[i] == ' ' && num != 0)
        {
            break;
        }


    }
    return num;
}
