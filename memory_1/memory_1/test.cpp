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

// ����ڵ㶨��
struct ListNode {
    int val;
    struct ListNode* next;
};

// ��������ڵ�
struct ListNode* createNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

// �������������ط����������ͷ�ڵ�
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

// ��ӡ����
void printLinkedList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // ����ԭʼ����
    struct ListNode* head = createNode(1);
    head->next = createNode(8);
    head->next->next = createNode(9);

    // ��ӡԭʼ����
    printf("ԭʼ����:\n");
    printLinkedList(head);

    // �������е���ֵ�������õ�������
    struct ListNode* doubledHead = doubleLinkedList(head);

    // ��ӡ�����������
    printf("�����������:\n");
    printLinkedList(doubledHead);

    // �ͷ������ڴ�
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