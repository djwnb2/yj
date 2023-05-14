#define _CRT_SECURE_NO_WARNINGS
//2. �������

/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] �������
 */

 // @lc code=start
 /**
  * Definition for singly-linked list.
  * struct ListNode {
  *     int val;
  *     struct ListNode *next;
  * };
  */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    // ����һ��ͷ��㣬��ͷָ��dummyָ����
    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    // ����һ��ָ�룬��curָ�����
    struct ListNode* cur = dummy;

    // ����һ����λ�ж�ֵ
    int t = 0;

    // ѭ����l1ָ��ǿ� �� l2ָ��ǿ� �� ��λֵ�ǿգ���ִ��
    while (l1 || l2 || t) {
        // ���l1ָ��ǿգ���l1��ֵ�ӵ�t�ϣ�l1ָ��l1����һ�����
        if (l1) t += l1->val, l1 = l1->next;
        // ���l2ָ��ǿգ���l2��ֵ�ӵ�t�ϣ�l2ָ��l2����һ�����
        if (l2) t += l2->val, l2 = l2->next;
        // ����һ����㣬��ֵ������û����½���next��ֵ�����Ǳ������ٶ���һ�£�����ֵ����Ұָ�룬C���Բ�����
        cur->next = malloc(sizeof(struct ListNode));
        cur->next->val = t % 10;
        cur->next->next = NULL;
        // curָ����һ����Ҳ����curָ�����½�㡣
        cur = cur->next;

        t /= 10;
    }

    // ����ͷָ��ָ�����һ�����
    return dummy->next;
}

