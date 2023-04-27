#define _CRT_SECURE_NO_WARNINGS
//�ݹ�
struct ListNode* mergeTwoLists(struct ListNode* pHead1, struct ListNode* pHead2) {
    if (pHead1 == NULL)
    {
        return pHead2;
    }
    if (pHead2 == NULL)
    {
        return pHead1;
    }
    struct ListNode* phead = NULL;
    if (pHead1->val > pHead2->val)
    {
        phead = pHead2;
        phead->next = mergeTwoLists(pHead1, pHead2->next);
    }
    else
    {
        phead = pHead1;
        phead->next = mergeTwoLists(pHead1->next, pHead2);

    }
    return phead;
    // write code here
}


struct ListNode* mergeTwoLists(struct ListNode* pHead1, struct ListNode* pHead2) {
    // write code here
    if (pHead1 == NULL)
        return pHead2;
    if (pHead2 == NULL)
        return pHead1;
    //��������ͷ�ڵ㣬����ͷ�ڵ��nextָ��ϲ���ɵ�����
    struct ListNode* dummyHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    //p�ڵ�ָ��������������һ���Ľڵ㣬��ʼʱָ������ͷ�ڵ�
    struct ListNode* p = dummyHead;

    while (pHead1 != NULL && pHead2 != NULL)
    {
        if (pHead1->val < pHead2->val)
        {
            p->next = pHead1;//step1ʱ��dummyHead->1
            p = pHead1;//pָ��1����������
            pHead1 = pHead1->next;
        }
        else
        {
            p->next = pHead2;//step2ʱ��dummyHead->1->2
            p = pHead2;//pָ��2����������
            pHead2 = pHead2->next;
        }
    }

    if (pHead1 != NULL)
        p->next = pHead1;
    if (pHead2 != NULL)
        p->next = pHead2;

    return dummyHead->next;
}