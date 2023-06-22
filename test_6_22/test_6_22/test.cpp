#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> pondSizes(vector<vector<int>>& land) {
        int m = land.size();
        int n = land[0].size();
        vector<int> sizes;
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        // 定义八个方向的偏移量
        vector<int> dx = { -1, -1, -1, 0, 0, 1, 1, 1 };
        vector<int> dy = { -1, 0, 1, -1, 1, -1, 0, 1 };

        // 广度优先搜索
        auto bfs = [&](int row, int col) {
            int size = 0;
            queue<pair<int, int>> q;
            q.push({ row, col });
            visited[row][col] = true;

            while (!q.empty()) {
                auto curr = q.front();
                q.pop();
                int x = curr.first;
                int y = curr.second;
                size++;

                for (int i = 0; i < 8; i++) {
                    int nx = x + dx[i];
                    int ny = y + dy[i];

                    if (nx >= 0 && nx < m && ny >= 0 && ny < n && land[nx][ny] == 0 && !visited[nx][ny]) {
                        q.push({ nx, ny });
                        visited[nx][ny] = true;
                    }
                }
            }

            return size;
        };

        // 遍历矩阵中的每个点
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (land[i][j] == 0 && !visited[i][j]) {
                    int size = bfs(i, j);
                    sizes.push_back(size);
                }
            }
        }

        // 按照池塘大小从小到大排序
        sort(sizes.begin(), sizes.end());

        return sizes;
    }
};