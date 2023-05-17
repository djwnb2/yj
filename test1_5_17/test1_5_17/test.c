#define _CRT_SECURE_NO_WARNINGS
//7. 整数反转
/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

 // @lc code=start
int reverse(int x) {
    int n = pow(2, 31) - 1;
    int cnt = 0;
    while (x != 0) {
        if (abs(cnt) > n / 10) return 0;
        cnt = x % 10 + cnt * 10;
        x /= 10;
    }
    return cnt;
}

