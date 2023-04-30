#define _CRT_SECURE_NO_WARNINGS
// 回文链表
bool isPalindrome(struct ListNode* head) {
    struct ListNode* fast = head, * slow = head, * prev = NULL;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        struct ListNode* temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }
    // 如果 fast 不为空，说明链表长度为奇数，则 slow 需要向右移动
    if (fast != NULL) {
        slow = slow->next;
    }
    while (prev != NULL) {
        if (prev->val != slow->val) {
            return false;
        }
        prev = prev->next;
        slow = slow->next;
    }
    return true;
}