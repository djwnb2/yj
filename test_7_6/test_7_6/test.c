#define _CRT_SECURE_NO_WARNINGS

long long* maximumEvenSplit(long long finalSum, int* returnSize) {
    long long* res = NULL;
    *returnSize = 0;
    if (finalSum % 2 > 0) {
        return res;
    }
    int k = sqrt(finalSum) + 1;
    res = (long long*)malloc(sizeof(long long) * k);
    for (int i = 2; i <= finalSum; i += 2) {
        res[++(*returnSize) - 1] = i;
        finalSum -= i;
    }
    res[(*returnSize) - 1] += finalSum;
    return res;
}
