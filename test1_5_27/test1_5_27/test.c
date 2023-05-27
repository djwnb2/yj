#define _CRT_SECURE_NO_WARNINGS
//572. ÁíÒ»¿ÃÊ÷µÄ×ÓÊ÷
bool IsSameTree(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }
    if (p == NULL || q == NULL)
    {
        return false;
    }
    if (p->val != q->val)
    {
        return false;
    }
    return IsSameTree(p->left, q->left) &&
        IsSameTree(p->right, q->right);
}
bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
    if (root == NULL || subRoot == NULL)
    {
        return false;
    }
    if (root->val == subRoot->val)
    {
        if (IsSameTree(root, subRoot))
        {
            return true;
        }

    }
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}