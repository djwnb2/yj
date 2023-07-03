#define _CRT_SECURE_NO_WARNINGS

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int arr1[100] = { 0 }, arr2[100] = { 0 };
    int index1 = 0, index2 = 0;
    while (l1) {//l1转换为数组
        arr1[index1++] = l1->val;
        l1 = l1->next;
    }
    while (l2) {//l2转换为数组
        arr2[index2++] = l2->val;
        l2 = l2->next;
    }
    int arr3[101] = { 0 };//记录累和
    int index3 = 0;
    int c = 0;
    for (index3; index3 < 101; index3++) {//枚举数组求和
        if (index1 > 0 && index2 > 0) { //l1，l2都有元素
            arr3[index3] = (arr1[--index1] + arr2[--index2] + c) % 10;
            c = (arr1[index1] + arr2[index2] + c) / 10;
        }
        else if (index1 > 0) {// l1有元素
            arr3[index3] = (arr1[--index1] + c) % 10;
            c = (arr1[index1] + c) / 10;
        }
        else if (index2 > 0) {// l2有元素
            arr3[index3] = (arr2[--index2] + c) % 10;
            c = (arr2[index2] + c) / 10;
        }
        else if (c) {// 进位还有元素
            arr3[index3] = c;
            c = 0;
        }
        else {//都没元素了
            break;
        }
    }
    struct ListNode* haed = (struct ListNode*)malloc(sizeof(struct ListNode));
    haed->next = NULL;
    struct ListNode* next = haed;
    while (index3 > 0) {//数组转换为链表，这里可以和上面合并在一起
        struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->next = NULL;
        node->val = arr3[--index3];
        next->next = node;
        next = node;
    }
    return haed->next;
}
