#define _CRT_SECURE_NO_WARNINGS
//876. 链表的中间结点
//快慢指针
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;

    }
    return slow;
}
