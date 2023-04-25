#define _CRT_SECURE_NO_WARNINGS
//203. ÒÆ³ıÁ´±íÔªËØ
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* prev = NULL, * cur = head;
    while (cur)
    {
        if (cur->val == val)
        {
            if (prev != NULL)
            {

                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }
            else
            {
                cur = head->next;
                free(head);
                head = cur;
            }
        }
        else
        {
            prev = cur;
            cur = cur->next;

        }
    }
    return head;
}
