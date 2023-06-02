#define _CRT_SECURE_NO_WARNINGS
//563. ¶þ²æÊ÷µÄÆÂ¶È
int dfs(struct TreeNode* root)
{
    if (root == NULL)
    {
        return NULL;
    }
    return root->val + dfs(root->left) + dfs(root->right);
}


int findTilt(struct TreeNode* root) {
    if (root == NULL)
    {
        return NULL;
    }
    return fabs(dfs(root->left) - dfs(root->right)) + findTilt(root->left) + findTilt(root->right);
}