#define _CRT_SECURE_NO_WARNINGS
//492. ¹¹Ôì¾ØÐÎ
int* constructRectangle(int area, int* returnSize) {
    int* arr = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    int n = sqrt(area);
    while (area % n != 0)
    {
        n--;
    }
    arr[0] = area / n;
    arr[1] = n;
    return arr;
}