#define _CRT_SECURE_NO_WARNINGS
//168. Excel±íÁÐÃû³Æ
void change(char* s, int num) {
    int left = 0, right = num;
    int flag;
    while (left < right) {
        flag = s[left];
        s[left] = s[right];
        s[right] = flag;
        left++;
        right--;
    }
}
char* convertToTitle(int columnNumber) {
    long long flag;
    int point = 0;
    char* str = (char*)malloc(sizeof(char) * 8);
    while (columnNumber > 26) {
        flag = (columnNumber - 1) % 26;
        columnNumber = (columnNumber - 1) / 26;
        str[point] = 'A' + flag;
        point++;
    }
    str[point] = 'A' + columnNumber - 1;
    str[point + 1] = '\0';
    change(str, point);
    return str;
}

