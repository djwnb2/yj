#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>

#define ROW 20 // 行数
#define COL 40 // 列数

int snakex[100], snakey[100]; // 蛇的坐标
int foodx, foody;             // 食物的坐标
int length = 3;               // 蛇的长度
int direction = 0;            // 蛇的方向（0：上，1：下，2：左，3：右）
int score = 0;                // 得分

void init() {
    initscr();     // 初始化屏幕
    cbreak();      // 开启字符传输模式
    noecho();      // 关闭回显模式
    keypad(stdscr, TRUE); // 开启功能键映射
    timeout(200);  // 设置输入延迟时间
    curs_set(0);   // 隐藏光标
    if (has_colors()) { // 如果支持终端颜色就开启彩色模式
        start_color();
        init_pair(1, COLOR_RED, COLOR_GREEN);
        init_pair(2, COLOR_WHITE, COLOR_BLACK);
        init_pair(3, COLOR_CYAN, COLOR_BLACK);
    }
}

int get_random(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void draw_snake() {
    for (int i = 0; i < length; i++) {
        mvprintw(snakex[i], snakey[i], "O");
    }
}

void erase_snake() {
    for (int i = 0; i < length; i++) {
        mvprintw(snakex[i], snakey[i], " ");
    }
}

void move_snake() {
    int newx = snakex[length - 1];
    int newy = snakey[length - 1];

    erase_snake();

    switch (direction) {
        case 0: newx--; break;
        case 1: newx++; break;
        case 2: newy--; break;
        case 3: newy++; break;
    }

    if (newx == foodx && newy == foody) {
        length++;
        score++;
        foodx = get_random(1, ROW - 2);
        foody = get_random(1, COL - 2);
    }

    for (int i = 0; i < length - 1; i++) {
        snakex[i] = snakex[i+1];
        snakey[i] = snakey[i+1];
        if (snakex[i] == newx && snakey[i] == newy) {
            mvprintw(ROW/2, COL/2 - 4, "Game Over!");
            refresh();
            sleep(2);
            endwin();
            exit(0);
        }
    }

    snakex[length - 1] = newx;
    snakey[length - 1] = newy;

    if (snakex[length - 1] == 0 || snakex[length - 1] == ROW - 1 || snakey[length - 1] == 0 || snakey[length - 1] == COL - 1) {
        mvprintw(ROW/2, COL/2 - 4, "Game Over!");
        refresh();
        sleep(2);
        endwin();
        exit(0);
    }

    draw_snake();

    mvprintw(0, 0, "Score: %d", score);

    attron(COLOR_PAIR(1));
    mvprintw(foodx, foody, "@");
    attroff(COLOR_PAIR(1));

    refresh();
}

int main() {
    srand((unsigned)time(NULL));

    init();

    for (int i = 1; i <= length; i++) {
        snakex[i-1] = ROW / 2;
        snakey[i-1] = COL / 2 - i;
    }

    foodx = get_random(1, ROW - 2);
    foody = get_random(1, COL - 2);

    while (1) {
        move_snake();
        int ch = getch();
        if ((ch == KEY_UP && direction != 1) || (ch == KEY_DOWN && direction != 0) || (ch == KEY_LEFT && direction != 3) || (ch == KEY_RIGHT && direction != 2)) {
            switch (ch) {
                case KEY_UP: direction = 0; break;
                case KEY_DOWN: direction = 1; break;
                case KEY_LEFT: direction = 2; break;
                case KEY_RIGHT: direction = 3; break;
                default: break;
            }
        }
    }

    endwin();
    return 0;
}