#define _CRT_SECURE_NO_WARNINGS
//412. Fizz Buzz
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    int i = 0;
    char* arr = (char*)malloc(sizeof(char) * 9 * n);//�����ܹ��洢�ַ����ַ�����9����Ϊ���Ҳ��FizzBuzz+'\0'
    char** string = (char**)malloc(sizeof(char*) * n);//����ָ���ַ������ַ���ָ�룬Ҳ���൱�ڴ������ַ�������
    for (i = 0; i < n; i++)
    {
        string[i] = &arr[9 * i];//���ַ�������ָ���ռ�
    }
    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0 & i % 5 == 0)strcpy(string[i - 1], "FizzBuzz");
        else if (i % 3 == 0)strcpy(string[i - 1], "Fizz");
        else if (i % 5 == 0)strcpy(string[i - 1], "Buzz");
        else sprintf(string[i - 1], "%d", i);
    }
    return string;
}