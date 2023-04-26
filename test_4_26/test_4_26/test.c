#define _CRT_SECURE_NO_WARNINGS
//206. ·´×ªÁ´±í
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        struct ListNode* Next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = Next;
    }
    return prev;
}
