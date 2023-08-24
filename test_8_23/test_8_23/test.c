#define _CRT_SECURE_NO_WARNINGS

int countServers(int** grid, int gridSize, int* gridColSize) {
    int m = gridSize, n = gridColSize[0];
    int rows[m], cols[n];
    memset(rows, 0, sizeof(rows));
    memset(cols, 0, sizeof(cols));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                ++rows[i];
                ++cols[j];
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1 && (rows[i] > 1 || cols[j] > 1)) {
                ++ans;
            }
        }
    }
    return ans;
}
