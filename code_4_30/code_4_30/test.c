#define _CRT_SECURE_NO_WARNINGS
//��ָ Offer 52. ��������ĵ�һ�������ڵ�
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {

	struct ListNode* hlong = headA, * hshort = headB;

	//	if(headA == NULL || headB == NULL)
	//    	return NULL;
	int count1 = 0, count2 = 0;//�������������ĳ���
	while (hlong != NULL) {
		count1++;
		hlong = hlong->next;
	}
	while (hshort != NULL) {
		count2++;
		hshort = hshort->next;
	}
	hlong = headA;//���µ�����λ��
	hshort = headB;
	int len;
	len = count1 - count2;
	if (len < 0) {//���headB����hlongָ��headB
		hlong = headB;
		hshort = headA;
		len = -len;//�为Ϊ��
	}
	while (len > 0) {//���������ȱ�������̵�������ͬ����
		hlong = hlong->next;
		len--;
	}

	while (hlong && hshort && hlong != hshort) {//�ҳ������ڵ㣬ps���������������valֵ��ȣ��Ǵ����
		hlong = hlong->next;
		hshort = hshort->next;
	}

	return hlong;
}

