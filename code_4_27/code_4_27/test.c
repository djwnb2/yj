#define _CRT_SECURE_NO_WARNINGS
//递归
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
    //创建虚拟头节点，虚拟头节点的next指向合并完成的链表
    struct ListNode* dummyHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    //p节点指向排序过程中最后一个的节点，初始时指向虚拟头节点
    struct ListNode* p = dummyHead;

    while (pHead1 != NULL && pHead2 != NULL)
    {
        if (pHead1->val < pHead2->val)
        {
            p->next = pHead1;//step1时，dummyHead->1
            p = pHead1;//p指向1，依次类推
            pHead1 = pHead1->next;
        }
        else
        {
            p->next = pHead2;//step2时，dummyHead->1->2
            p = pHead2;//p指向2，依此类推
            pHead2 = pHead2->next;
        }
    }

    if (pHead1 != NULL)
        p->next = pHead1;
    if (pHead2 != NULL)
        p->next = pHead2;

    return dummyHead->next;
}