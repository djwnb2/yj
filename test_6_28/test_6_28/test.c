#define _CRT_SECURE_NO_WARNINGS
//119. Ñî»ÔÈý½Ç II
int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex + 1;
    int* C[rowIndex + 1];
    for (int i = 0; i <= rowIndex; ++i) {
        C[i] = malloc(sizeof(int) * (i + 1));
        C[i][0] = C[i][i] = 1;
        for (int j = 1; j < i; ++j) {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
    return C[rowIndex];
}

