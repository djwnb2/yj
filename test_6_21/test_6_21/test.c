#define _CRT_SECURE_NO_WARNINGS

const int dirs[8][2] = {
    {1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
};

bool judge(const char** chessboard, int chessboardSize, int chessboardColSize, int x, int y, int dx, int dy) {
    x += dx;
    y += dy;
    while (0 <= x && x < chessboardSize && 0 <= y && y < chessboardColSize) {
        if (chessboard[x][y] == 'X') {
            return true;
        }
        else if (chessboard[x][y] == '.') {
            return false;
        }
        x += dx;
        y += dy;
    }
    return false;
}

int bfs(char** chessboard, int chessboardSize, int chessboardColSize, int px, int py) {
    int cnt = 0;
    int tot = chessboardSize * chessboardColSize;
    int queue[tot][2];
    int head = 0, tail = 0;
    queue[tail][0] = px;
    queue[tail][1] = py;
    tail++;
    chessboard[px][py] = 'X';
    while (head != tail) {
        int x = queue[head][0], y = queue[head][1];
        head++;
        printf("x = %d, y = %d\n", x, y);
        for (int i = 0; i < 8; ++i) {
            if (judge(chessboard, chessboardSize, chessboardColSize, x, y, dirs[i][0], dirs[i][1])) {
                int nx = x + dirs[i][0], ny = y + dirs[i][1];
                while (chessboard[nx][ny] != 'X') {
                    queue[tail][0] = nx;
                    queue[tail][1] = ny;
                    tail++;
                    chessboard[nx][ny] = 'X';
                    nx += dirs[i][0];
                    ny += dirs[i][1];
                    ++cnt;
                }
            }
        }
    }
    return cnt;
}

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int flipChess(char** chessboard, int chessboardSize) {
    int res = 0;
    int chessboardColSize = strlen(chessboard[0]);
    char* board[chessboardSize];
    for (int k = 0; k < chessboardSize; k++) {
        board[k] = (char*)calloc(chessboardColSize + 1, sizeof(char));
    }
    for (int i = 0; i < chessboardSize; ++i) {
        for (int j = 0; j < chessboardColSize; ++j) {
            if (chessboard[i][j] == '.') {
                for (int k = 0; k < chessboardSize; k++) {
                    strcpy(board[k], chessboard[k]);
                }
                int curr = bfs(board, chessboardSize, chessboardColSize, i, j);
                res = MAX(res, curr);
            }
        }
    }
    for (int k = 0; k < chessboardSize; k++) {
        free(board[k]);
    }
    return res;
}

