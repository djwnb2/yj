void bubble_sort(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = { 5, 2, 8, 4, 9, 1 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("Before sorting:");
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    bubble_sort(arr, len);

    printf("After sorting:");
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
