#define _CRT_SECURE_NO_WARNINGS

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int arr1[100] = { 0 }, arr2[100] = { 0 };
    int index1 = 0, index2 = 0;
    while (l1) {//l1ת��Ϊ����
        arr1[index1++] = l1->val;
        l1 = l1->next;
    }
    while (l2) {//l2ת��Ϊ����
        arr2[index2++] = l2->val;
        l2 = l2->next;
    }
    int arr3[101] = { 0 };//��¼�ۺ�
    int index3 = 0;
    int c = 0;
    for (index3; index3 < 101; index3++) {//ö���������
        if (index1 > 0 && index2 > 0) { //l1��l2����Ԫ��
            arr3[index3] = (arr1[--index1] + arr2[--index2] + c) % 10;
            c = (arr1[index1] + arr2[index2] + c) / 10;
        }
        else if (index1 > 0) {// l1��Ԫ��
            arr3[index3] = (arr1[--index1] + c) % 10;
            c = (arr1[index1] + c) / 10;
        }
        else if (index2 > 0) {// l2��Ԫ��
            arr3[index3] = (arr2[--index2] + c) % 10;
            c = (arr2[index2] + c) / 10;
        }
        else if (c) {// ��λ����Ԫ��
            arr3[index3] = c;
            c = 0;
        }
        else {//��ûԪ����
            break;
        }
    }
    struct ListNode* haed = (struct ListNode*)malloc(sizeof(struct ListNode));
    haed->next = NULL;
    struct ListNode* next = haed;
    while (index3 > 0) {//����ת��Ϊ����������Ժ�����ϲ���һ��
        struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->next = NULL;
        node->val = arr3[--index3];
        next->next = node;
        next = node;
    }
    return haed->next;
}
