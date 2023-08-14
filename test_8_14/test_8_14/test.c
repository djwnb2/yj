#define _CRT_SECURE_NO_WARNINGS

struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2) {
    if (root1 == NULL)
    {
        return root2;
    }
    if (root2 == NULL)
    {
        return root1;
    }
    struct TreeNode* merge = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    merge->val = root1->val + root2->val;
    merge->left = mergeTrees(root1->left, root2->left);
    merge->right = mergeTrees(root1->right, root2->right);
    return merge;
}