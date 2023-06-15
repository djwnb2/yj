#define _CRT_SECURE_NO_WARNINGS

bool* canMakePaliQueries(char* s, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    int n = strlen(s);
    int* count = (int*)malloc((n + 1) * sizeof(int));
    memset(count, 0, (n + 1) * sizeof(int));
    for (int i = 0; i < n; i++) {
        count[i + 1] = count[i] ^ (1 << (s[i] - 'a'));
    }
    bool* res = (bool*)malloc(queriesSize * sizeof(bool));
    for (int i = 0; i < queriesSize; i++) {
        int l = queries[i][0], r = queries[i][1], k = queries[i][2];
        int bits = 0, x = count[r + 1] ^ count[l];
        while (x > 0) {
            x &= x - 1;
            bits++;
        }
        res[i] = bits / 2 <= k;
    }
    *returnSize = queriesSize;
    free(count);
    return res;
}