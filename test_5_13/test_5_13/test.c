#define _CRT_SECURE_NO_WARNINGS
//������ 02.02. ���ص����� k ���ڵ�
int kthToLast(struct ListNode* head, int k) {
    struct ListNode* cur = head;
    int num = 0;
    while (cur)
    {
        cur = cur->next;
        num++;
    }
    int m = num - k;
    cur = head;
    while (m)
    {
        cur = cur->next;
        m--;
    }
    return cur->val;
}
