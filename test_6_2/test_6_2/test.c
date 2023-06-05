#define _CRT_SECURE_NO_WARNINGS
//½£Ö¸ Offer 27. ¶þ²æÊ÷µÄ¾µÏñ
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