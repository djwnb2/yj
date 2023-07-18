#define _CRT_SECURE_NO_WARNINGS

//result>10
// Òª½øĞĞÅĞ¶Ï
char* addStrings(char* num1, char* num2) {
    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;
    char* ans = (char*)malloc(sizeof(char) * fmax(i, j) + 3);
    int add = 0;
    int len = 0;
    while (i >= 0 || j >= 0 || add != 0)
    {
        int x = i >= 0 ? num1[i] - '0' : 0;
        int y = j >= 0 ? num2[j] - '0' : 0;
        int target = x + y + add;
        ans[len++] = target % 10 + '0';
        add = target / 10;
        i--;
        j--;

    }

    for (int i = 0; 2 * i < len; i++)
    {
        int cur = ans[i];
        ans[i] = ans[len - 1 - i];
        ans[len - i - 1] = cur;
    }
    ans[len++] = 0;
    return ans;
}