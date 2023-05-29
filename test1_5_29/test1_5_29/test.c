#define _CRT_SECURE_NO_WARNINGS

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isUnivalTree(struct TreeNode* root) {
    if (root == NULL)
    {
        return true;
    }
    if (root->left && root->left->val != root->val)
    {
        return false;
    }
    if (root->right && root->right->val != root->val)
    {
        return false;
    }
    return isUnivalTree(root->left) && isUnivalTree(root->right);
}