#define _CRT_SECURE_NO_WARNINGS
//2. 两数相加
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* curr = dummy;
    int carry = 0;

    while (l1 || l2) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;
        curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr->next->val = sum % 10;
        curr->next->next = NULL;
        curr = curr->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    if (carry > 0) {
        curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr->next->val = carry;
        curr->next->next = NULL;
    }

    return dummy->next;
}
