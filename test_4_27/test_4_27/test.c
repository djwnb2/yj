#define _CRT_SECURE_NO_WARNINGS
//BM1 ��ת����
struct ListNode* ReverseList(struct ListNode* pHead)
{
    if (pHead == NULL)
        return NULL;

    struct ListNode* p;
    struct ListNode* q;
    p = pHead;

    while (pHead->next != NULL)  //ͷָ�������������
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