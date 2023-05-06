#define _CRT_SECURE_NO_WARNINGS
//BM6 判断链表中是否有环
bool hasCycle(struct ListNode* head) {
    struct ListNode* p1 = head, * p2 = head;
    while (p1 && p2) {
        p1 = p1->next;
        p2 = p2->next;
        if (p2) p2 = p2->next;
        if (p1 == p2 && p1) return true;
    }
    return false;
}