#define _CRT_SECURE_NO_WARNINGS

void dfs(struct TreeNode* root, int* max, int* cnt)
{
    int tmp = 0;
    if (root == NULL) {
        return;
    }

    if (root->val >= (*max)) {
        (*cnt)++;
        *max = root->val;
    }

    tmp = (*max);
    if (root->left) {
        dfs(root->left, max, cnt);
    }

    *max = tmp;

    if (root->right) {
        dfs(root->right, max, cnt);
    }
}


int goodNodes(struct TreeNode* root)
{
    int max = root->val;
    int cntleft = 0;
    dfs(root, &max, &cntleft);
    return cntleft;
}

