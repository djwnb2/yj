#define _CRT_SECURE_NO_WARNINGS
//160. Ïà½»Á´±í
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {

    struct ListNode* a = headA;
    struct ListNode* b = headB;
    int flag = 0;
    while (flag != 4)
    {


        if (a == NULL)
        {
            a = headB;
            flag++;
        }
        if (b == NULL)
        {
            b = headA;
            flag++;
        }
        if (a == b)
        {
            return a;
        }
        a = a->next;
        b = b->next;
    }
    return NULL;
}
