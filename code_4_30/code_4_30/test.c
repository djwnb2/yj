#define _CRT_SECURE_NO_WARNINGS
//剑指 Offer 52. 两个链表的第一个公共节点
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {

	struct ListNode* hlong = headA, * hshort = headB;

	//	if(headA == NULL || headB == NULL)
	//    	return NULL;
	int count1 = 0, count2 = 0;//求出两个单链表的长度
	while (hlong != NULL) {
		count1++;
		hlong = hlong->next;
	}
	while (hshort != NULL) {
		count2++;
		hshort = hshort->next;
	}
	hlong = headA;//更新到初试位置
	hshort = headB;
	int len;
	len = count1 - count2;
	if (len < 0) {//如果headB长，hlong指向headB
		hlong = headB;
		hshort = headA;
		len = -len;//变负为正
	}
	while (len > 0) {//长的链表先遍历到与短的链表相同长度
		hlong = hlong->next;
		len--;
	}

	while (hlong && hshort && hlong != hshort) {//找出公共节点，ps：这里起初我是令val值相等，是错误的
		hlong = hlong->next;
		hshort = hshort->next;
	}

	return hlong;
}

