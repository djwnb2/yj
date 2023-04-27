#define _CRT_SECURE_NO_WARNINGS
//BM1 反转链表
struct ListNode* ReverseList(struct ListNode* pHead)
{
    if (pHead == NULL)
        return NULL;

    struct ListNode* p;
    struct ListNode* q;
    p = pHead;

    while (pHead->next != NULL)  //头指针首先完成逆置
        pHead = pHead->next;

    while (p != pHead)
    {
        q = p->next;
        p->next = pHead->next;
        pHead->next = p;
        p = q;
    }
    return pHead;
}