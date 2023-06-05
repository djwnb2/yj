#define _CRT_SECURE_NO_WARNINGS
//��ָ Offer 27. �������ľ���
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* mirrorTree(struct TreeNode* root) {
    if (root == NULL)
    {
        return NULL;
    }
    struct TreeNode* Left = mirrorTree(root->left);
    struct TreeNode* Right = mirrorTree(root->right);
    root->left = Right;
    root->right = Left;
    return root;
}