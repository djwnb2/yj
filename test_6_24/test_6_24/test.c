#define _CRT_SECURE_NO_WARNINGS

int minDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;

    // 如果当前节点是叶子节点，返回 1
    if (root->left == NULL && root->right == NULL)
        return 1;

    // 如果左子树为空，递归计算右子树的最小深度
    if (root->left == NULL)
        return minDepth(root->right) + 1;

    // 如果右子树为空，递归计算左子树的最小深度
    if (root->right == NULL)
        return minDepth(root->left) + 1;

    // 如果两个子树都不为空，递归计算两个子树的最小深度
    int leftDepth = minDepth(root->left);
    int rightDepth = minDepth(root->right);

    // 返回两个子树的最小深度加上当前节点的深度（加1）
    return (leftDepth < rightDepth) ? leftDepth + 1 : rightDepth + 1;
}