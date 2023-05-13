#define _CRT_SECURE_NO_WARNINGS
//面试题 02.02. 返回倒数第 k 个节点
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
