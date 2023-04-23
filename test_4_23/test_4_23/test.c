#define _CRT_SECURE_NO_WARNINGS
//1346. 检查整数及其两倍数是否存在
bool checkIfExist(int* arr, int arrSize) {

    int i, j, tmp = 0;
    for (i = 0; i < arrSize; i++)
    {
        if (arr[i] % 2 == 0)
        {
            tmp = arr[i] / 2;
            for (j = 0; j < arrSize; j++)
            {
                if (tmp == arr[j] && j != i)
                {
                    return true;
                }
            }
        }

    }
    return false;
}