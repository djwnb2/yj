#define _CRT_SECURE_NO_WARNINGS

int cmp(void* pa, void* pb)
{
    return *(int*)pb - *(int*)pa;
}
int miceAndCheese(int* reward1, int reward1Size, int* reward2, int reward2Size, int k) {
    int ans = 0;
    int n = reward1Size;
    int  Ga[n];
    for (int i = 0; i < n; i++)
    {
        ans += reward2[i];
        Ga[i] = reward1[i] - reward2[i];
    }
    qsort(Ga, n, sizeof(int), cmp);
    for (int i = 0; i < k; i++)
    {
        ans += Ga[i];
    }
    return ans;
}