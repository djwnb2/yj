#define _CRT_SECURE_NO_WARNINGS
//226. ·­×ª¶þ²æÊ÷
struct TreeNode* invertTree(struct TreeNode* root) {
    if (root == NULL)
    {
        return NULL;
    }
    struct TreeNode* Left = invertTree(root->left);
    struct TreeNode* Right = invertTree(root->right);
    root->left = Right;
    root->right = Left;
    return root;
}