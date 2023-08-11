#define _CRT_SECURE_NO_WARNINGS

int diagonalSum(int** mat, int matSize, int* matColSize) {
    int n = matSize;
    int sum = 0;
    for (int i = 0; i < matSize; i++)
    {
        for (int j = 0; j < matSize; j++)
        {
            if (i == j || i + j == n - 1)
            {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}