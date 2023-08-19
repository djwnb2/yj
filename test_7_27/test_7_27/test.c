#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


struct ListNode {
    int val;
    struct ListNode* next;
};


struct ListNode* createCircularList(int n) {
    if (n <= 0) return NULL;

    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = head;

    struct ListNode* current = head;


    for (int i = 2; i <= n; ++i) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = i;
        newNode->next = head;
        current->next = newNode;
        current = newNode;
    }

    return head;
}


int josephusProblem(struct ListNode* head, int m) {
    if (!head || m <= 0) return -1;

    struct ListNode* current = head;
    struct ListNode* prev = NULL;


    while (current->next != current) 
    {
        for (int i = 0; i < m - 1; ++i) 
        {
            prev = current;
            current = current->next;
        }


        prev->next = current->next;
        free(current);

        current = prev->next;
    }


    return current->val;
}


void freeCircularList(struct ListNode* head) {
    if (!head) return;

    struct ListNode* current = head;
    struct ListNode* next;

    while (current->next != head) {
        next = current->next;
        free(current);
        current = next;
    }

    free(current);
}

int main() {
    int n, m = 0;
    scanf("%d %d", n, m);
    struct ListNode* head = createCircularList(n);
    int lastRemaining = josephusProblem(head, m);

    printf("%d\n", lastRemaining);

    freeCircularList(head);
    return 0;
}
