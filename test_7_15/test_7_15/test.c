#define _CRT_SECURE_NO_WARNINGS
//
const int dx[4] = { 0, 1, 0, -1 };
const int dy[4] = { 1, 0, -1, 0 };

int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int n = gridSize, m = gridColSize[0];
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j]) {
                int cnt = 0;
                for (int k = 0; k < 4; ++k) {
                    int tx = i + dx[k];
                    int ty = j + dy[k];
                    if (tx < 0 || tx >= n || ty < 0 || ty >= m || !grid[tx][ty]) {
                        cnt += 1;
                    }
                }
                ans += cnt;
            }
        }
    }
    return ans;
}

