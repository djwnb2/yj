#define _CRT_SECURE_NO_WARNINGS

int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}
bool canMakeArithmeticProgression(int* arr, int arrSize) {
    qsort(arr, arrSize, sizeof(int), cmp);
    int dx = arr[1] - arr[0];
    for (int i = 1; i < arrSize - 1; i++)
    {
        if (dx != arr[i + 1] - arr[i])
        {
            return false;
        }
    }
    return true;
}