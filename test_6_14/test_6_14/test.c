#define _CRT_SECURE_NO_WARNINGS
//1375. �������ַ���ǰ׺һ�µĴ���
int numTimesAllBlue(int* flips, int flipsSize) {
    int n = flipsSize;
    int ans = 0, right = 0;
    for (int i = 0; i < n; ++i) {
        right = fmax(right, flips[i]);
        if (right == i + 1) {
            ++ans;
        }
    }
    return ans;
}

