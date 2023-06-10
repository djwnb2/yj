#define _CRT_SECURE_NO_WARNINGS
//1170. 比较字符串最小字母出现频次
int f(const char* s) {
    int cnt = 0;
    char ch = 'z';
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c < ch) {
            ch = c;
            cnt = 1;
        }
        else if (c == ch) {
            cnt++;

        }
    }
    return cnt;
}


int* numSmallerByFrequency(char** queries, int queriesSize, char** words, int wordsSize, int* returnSize) {
    int count[12] = { 0 };
    for (int i = 0; i < wordsSize; i++) {
        count[f(words[i])]++;
    }
    for (int i = 9; i >= 1; i--) {
        count[i] += count[i + 1];
    }
    int* res = (int*)malloc(sizeof(int) * queriesSize);
    for (int i = 0; i < queriesSize; i++) {
        res[i] = count[f(queries[i]) + 1];
    }
    *returnSize = queriesSize;
    return res;
}
