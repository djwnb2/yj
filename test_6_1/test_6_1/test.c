#define _CRT_SECURE_NO_WARNINGS
//872. Ò¶×ÓÏàËÆµÄÊ÷
bool isLeaf(struct TreeNode* node)
{
    return (node->left == NULL && node->right == NULL);
}
void dfs(struct TreeNode* root, int* leaf_values, int* index)
{
    if (root == NULL)
    {
        return;
    }
    if (isLeaf(root))
    {
        leaf_values[(*index)++] = root->val;
        return;
    }
    dfs(root->left, leaf_values, index);
    dfs(root->right, leaf_values, index);

}
bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {
    int leaf_values1[1000];
    int leaf_values2[1000];
    int index1 = 0;
    int index2 = 0;
    dfs(root1, leaf_values1, &index1);
    dfs(root2, leaf_values2, &index2);
    if (index1 != index2)
    {
        return false;
    }
    for (int i = 0; i < index1; i++)
    {
        if (leaf_values1[i] != leaf_values2[i])
        {
            return false;
        }
    }
    return true;

}