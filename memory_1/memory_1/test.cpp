#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//int main()
//{
//	try
//	{
//		char* p1 = new char[0x7fff];
//	}
//	catch(const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//}
//int main()
// 
//	new()
//
//

//}

#include <stdio.h>
#include <stdlib.h>

// 链表节点定义
struct ListNode {
    int val;
    struct ListNode* next;
};

// 创建链表节点
struct ListNode* createNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

// 翻倍函数，返回翻倍后的链表头节点
struct ListNode* doubleLinkedList(struct ListNode* head) {
    struct ListNode* current = head;
    struct ListNode* newHead = NULL;
    struct ListNode* newCurrent = NULL;

    while (current != NULL) {
        int doubledVal = current->val * 2;
        struct ListNode* newNode = createNode(doubledVal);
        if (newHead == NULL) {
            newHead = newNode;
            newCurrent = newHead;
        }
        else {
            newCurrent->next = newNode;
            newCurrent = newCurrent->next;
        }
        current = current->next;
    }

    return newHead;
}

// 打印链表
void printLinkedList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // 创建原始链表
    struct ListNode* head = createNode(1);
    head->next = createNode(8);
    head->next->next = createNode(9);

    // 打印原始链表
    printf("原始链表:\n");
    printLinkedList(head);

    // 将链表中的数值翻倍，得到新链表
    struct ListNode* doubledHead = doubleLinkedList(head);

    // 打印翻倍后的链表
    printf("翻倍后的链表:\n");
    printLinkedList(doubledHead);

    // 释放链表内存
    struct ListNode* current = head;
    while (current != NULL) {
        struct ListNode* temp = current;
        current = current->next;
        free(temp);
    }

    current = doubledHead;
    while (current != NULL) {
        struct ListNode* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}