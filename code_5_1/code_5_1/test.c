#define _CRT_SECURE_NO_WARNINGS
//1290. 二进制链表转整数
int getDecimalValue(struct ListNode* head) {
    int num = 0;
    while (head)
    {
        num = num * 2 + head->val;
        head = head->next;
    }
    return num;

}
//19. 删除链表的倒数第 N 个结点
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }
    if (!fast)//fast 为空 则删除头节点
    {
        return head->next;
    }
    while (fast->next)
    {
        fast = fast->next;
        slow = slow->next;

    }
    slow->next = slow->next->next;
    return head;
}