#define _CRT_SECURE_NO_WARNINGS
//现有一链表的头指针 ListNode* pHead，给一定值x，
//编写一段代码将所有小于x的结点排在其余结点之前，且不能改变原来的数据顺序，
//返回重新排列后的链表的头指针。
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        ListNode less_head(0); 
        ListNode greater_head(0); 
        ListNode* less_ptr = &less_head;
        ListNode* greater_ptr = &greater_head; 

        while (pHead) {
            if (pHead->val < x) { 
                less_ptr->next = pHead;
                less_ptr = less_ptr->next;
            }
            else { 
                greater_ptr->next = pHead;
                greater_ptr = greater_ptr->next;
            }
            pHead = pHead->next;
        }

        less_ptr->next = greater_head.next; 
        greater_ptr->next = NULL; 

        return less_head.next; 
    }
};