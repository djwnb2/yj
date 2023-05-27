#define _CRT_SECURE_NO_WARNINGS
//101. ¶Ô³Æ¶þ²æÊ÷
bool Sametree(struct TreeNode* treeleft, struct TreeNode* treeright)
{
    if (treeleft == NULL && treeright == NULL)
    {
        return true;
    }
    if (treeleft == NULL || treeright == NULL)
    {
        return  false;
    }
    if (treeleft->val != treeright->val)
    {
        return false;
    }
    return Sametree(treeleft->left, treeright->right)
        && Sametree(treeleft->right, treeright->left);


}
bool isSymmetric(struct TreeNode* root) {
    return Sametree(root->left, root->right);
}