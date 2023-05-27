#define _CRT_SECURE_NO_WARNINGS
//572. ��һ����������
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
int Treesize(struct TreeNode* root) {
    return root == NULL ? 0 : Treesize(root->left) + Treesize(root->right) + 1;
}

void TreeTraversal(struct TreeNode* root, int* arr, int* pi) {
    if (root == NULL) {
        return;
    }
    arr[(*pi)++] = root->val;
    TreeTraversal(root->left, arr, pi);
    TreeTraversal(root->right, arr, pi);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = Treesize(root);
    int* arr = (int*)malloc(*returnSize * sizeof(int));
    int i = 0;
    TreeTraversal(root, arr, &i);
    return arr;
}

// ��ʹ����arr���ͷ��ڴ�
void freePreorderTraversal(int* arr) {
    free(arr);
}

���ظ���
���� LeetCode