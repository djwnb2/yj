#define _CRT_SECURE_NO_WARNINGS
//2600. K ����Ʒ������
int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    if (k <= numOnes) {
        return k;
    }
    else if (k <= numOnes + numZeros) {
        return numOnes;
    }
    else {
        return numOnes - (k - numOnes - numZeros);
    }
}
