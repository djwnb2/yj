#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
	void InOrderConvert(TreeNode* cur, TreeNode*& prev)
	{
		if (cur == nullptr) return;
		InOrderConvert(cur->left, prev);
		cur->left = prev;
		if (prev)
		{
			prev->right = cur;
		}
		prev = cur;
		InOrderConvert(cur->right, prev);
	}
	TreeNode* Convert(TreeNode* pRootOfTree) {
		TreeNode* cur = pRootOfTree, * prev = nullptr;
		InOrderConvert(cur, prev);
		TreeNode* head = pRootOfTree;
		while (head && head->left)
		{
			head = head->left;
		}
		return head;

	}
};