#define _CRT_SECURE_NO_WARNINGS
//2352. 相等行列对
bool True(int** grid, int gridSize, int col, int row)
{
    for (int i = 0; i < gridSize; i++)
    {
        if (grid[row][i] != grid[i][col])
        {
            return false;
        }

    }
    return true;
}
int equalPairs(int** grid, int gridSize, int* gridColSize) {
    int num = 0;
    for (int row = 0; row < gridSize; row++)
    {
        for (int col = 0; col < gridSize; col++)
        {
            if (True(grid, gridSize, col, row))
            {
                num++;
            }
        }
    }
    return num;
}
