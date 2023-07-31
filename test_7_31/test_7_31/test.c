#define _CRT_SECURE_NO_WARNINGS

void reorderList(struct ListNode* head) {
    if (head == NULL)
    {
        return;
    }
    struct ListNode* arr[40001];
    struct ListNode* node = head;
    int n = 0;
    while (node != NULL)
    {
        arr[n++] = node;
        node = node->next;

    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        arr[i]->next = arr[j];
        i++;
        if (i == j)
        {
            break;
        }
        arr[j]->next = arr[i];
        j--;
    }
    arr[i]->next = NULL;
}