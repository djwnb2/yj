#define _CRT_SECURE_NO_WARNINGS
//��ָ Offer 06. ��β��ͷ��ӡ����
void reversePrintList(struct ListNode* head, int* nums, int* index) {
    if (head == NULL) {
        return;
    }

    reversePrintList(head->next, nums, index);
    nums[(*index)++] = head->val;
}

int* reversePrint(struct ListNode* head, int* returnSize) {
    *returnSize = 0; //��ʼ��
    //��ʼ����ԭ������lenΪ0

    if (head == NULL) {
        return NULL;
    }

    // ���������ȣ����ڶ�̬���������С
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
