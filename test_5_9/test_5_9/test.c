#define _CRT_SECURE_NO_WARNINGS
//61. Ðý×ªÁ´±í
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL || head->next == NULL || k <= 0)
    {
        return head;
    }
    int n = 1;
    struct ListNode* cur = head;
    while (cur->next != NULL)
    {
        cur = cur->next;
        n++;
    }
    int num = n - k % n;
    if (num == n)
    {
        return head;
    }
    cur->next = head;

    while (num--)
    {
        cur = cur->next;
    }
    struct ListNode* src = cur->next;
    cur->next = NULL;
    return src;


}