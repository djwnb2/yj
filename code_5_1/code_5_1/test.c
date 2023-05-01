#define _CRT_SECURE_NO_WARNINGS
//1290. ����������ת����
int getDecimalValue(struct ListNode* head) {
    int num = 0;
    while (head)
    {
        num = num * 2 + head->val;
        head = head->next;
    }
    return num;

}
//19. ɾ������ĵ����� N �����
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }
    if (!fast)//fast Ϊ�� ��ɾ��ͷ�ڵ�
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