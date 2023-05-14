#define _CRT_SECURE_NO_WARNINGS
//2. 两数相加

/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
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
    // 创造一个头结点，让头指针dummy指向它
    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    // 创造一个指针，让cur指向最后
    struct ListNode* cur = dummy;

    // 创造一个进位判断值
    int t = 0;

    // 循环（l1指向非空 或 l2指向非空 或 进位值非空）就执行
    while (l1 || l2 || t) {
        // 如果l1指向非空，则将l1的值加到t上，l1指向l1的下一个结点
        if (l1) t += l1->val, l1 = l1->next;
        // 如果l2指向非空，则将l2的值加到t上，l2指向l2的下一个结点
        if (l2) t += l2->val, l2 = l2->next;
        // 创造一个结点，赋值。本来没想给新结点的next赋值，可是报错啊，百度了一下，不赋值就是野指针，C语言不允许
        cur->next = malloc(sizeof(struct ListNode));
        cur->next->val = t % 10;
        cur->next->next = NULL;
        // cur指向下一个，也就是cur指向了新结点。
        cur = cur->next;

        t /= 10;
    }

    // 返回头指针指向的下一个结点
    return dummy->next;
}

