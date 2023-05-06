#define _CRT_SECURE_NO_WARNINGS
//138. ���ƴ����ָ�������
struct Node* copyRandomList(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }
    // �����½ڵ㣬�໥����
    for (struct Node* node = head; node != NULL; node = node->next->next) {
        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->val = node->val;
        newnode->next = node->next;
        newnode->random = NULL;
        node->next = newnode;
    }
    // ���� random ָ��
    for (struct Node* node = head; node != NULL; node = node->next->next) {
        struct Node* newnode = node->next;
        if (node->random != NULL) {
            newnode->random = node->random->next;
        }
    }
    // �����¾�����
    struct Node* newhead = head->next;
    for (struct Node* node = head; node != NULL; node = node->next) {
        struct Node* newnode = node->next;
        node->next = newnode->next;
        if (newnode->next != NULL) {
            newnode->next = newnode->next->next;
        }
        else {
            newnode->next = NULL;
        }
    }
    return newhead;
}
