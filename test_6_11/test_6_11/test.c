#define _CRT_SECURE_NO_WARNINGS
//
struct ListNode* removeZeroSumSublists(struct ListNode* head) {
    struct ListNode* L = (struct ListNode*)malloc(sizeof(struct ListNode));
    L->next = head;
    L->val = 0;
    int x = 0;
    struct ListNode* p = L;
    while (p)
    {
        struct ListNode* q = p->next;
        while (q)
        {
            x -= q->val;
            if (x == 0)
            {
                p->next = q->next;
            }
            q = q->next;

        }
        p = p->next;
        x = 0;
    }
    return L->next;
}