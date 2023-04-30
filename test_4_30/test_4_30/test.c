#define _CRT_SECURE_NO_WARNINGS
// ��������
bool isPalindrome(struct ListNode* head) {
    struct ListNode* fast = head, * slow = head, * prev = NULL;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        struct ListNode* temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }
    // ��� fast ��Ϊ�գ�˵��������Ϊ�������� slow ��Ҫ�����ƶ�
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