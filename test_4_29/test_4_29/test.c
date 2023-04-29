#define _CRT_SECURE_NO_WARNINGS
//剑指 Offer 06. 从尾到头打印链表
void reversePrintList(struct ListNode* head, int* nums, int* index) {
    if (head == NULL) {
        return;
    }

    reversePrintList(head->next, nums, index);
    nums[(*index)++] = head->val;
}

int* reversePrint(struct ListNode* head, int* returnSize) {
    *returnSize = 0; //初始化
    //初始化的原因在于len为0

    if (head == NULL) {
        return NULL;
    }

    // 计算链表长度，用于动态分配数组大小
    int len = 0;
    struct ListNode* curr = head;
    while (cur) {
        len++;
        cur = cur->next;
    }

    int* res = (int*)malloc(len * sizeof(int));
    int index = 0;

    reversePrintList(head, res, &index);
    *returnSize = len;

    return res;
}
