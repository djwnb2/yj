#define _CRT_SECURE_NO_WARNINGS
//9. ������
bool isPalindrome(int x) {
    //�ų�xΪ���������
    if (x < 0)
    {
        return 0;
    }

    //��x����ַ����飬��β�����Ƚ�
    char* p = malloc(sizeof(char) * 11);//p�ĳ���Ϊx����ܱ�ʾֵ��λ����int�ͱ�������ܱ�ʾ��ʮ��������2147483647��ֻ��11λ
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


