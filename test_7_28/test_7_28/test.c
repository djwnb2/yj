#define _CRT_SECURE_NO_WARNINGS

int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}
double trimMean(int* arr, int arrSize) {
    qsort(arr, arrSize, sizeof(int), cmp);
    int part = 0;
    for (int i = arrSize / 20; i < (19 * arrSize / 20); i++)
    {
        part += arr[i];
    }

    return part / (arrSize * 0.9);
}