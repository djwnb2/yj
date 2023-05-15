#define _CRT_SECURE_NO_WARNINGS
//412. Fizz Buzz
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    int i = 0;
    char* arr = (char*)malloc(sizeof(char) * 9 * n);//创建能够存储字符的字符串，9是因为最大也就FizzBuzz+'\0'
    char** string = (char**)malloc(sizeof(char*) * n);//创建指向字符串的字符串指针，也就相当于创建了字符串数组
    for (i = 0; i < n; i++)
    {
        string[i] = &arr[9 * i];//给字符串数组指定空间
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