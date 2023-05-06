#define _CRT_SECURE_NO_WARNINGS
//138. 复制带随机指针的链表
struct Node* copyRandomList(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }
    // 创建新节点，相互连接
    for (struct Node* node = head; node != NULL; node = node->next->next) {
        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->val = node->val;
        newnode->next = node->next;
        newnode->random = NULL;
        node->next = newnode;
    }
    // 连接 random 指针
    for (struct Node* node = head; node != NULL; node = node->next->next) {
        struct Node* newnode = node->next;
        if (node->random != NULL) {
            newnode->random = node->random->next;
        }
    }
    // 分离新旧链表
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
