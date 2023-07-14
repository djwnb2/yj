#define _CRT_SECURE_NO_WARNINGS

int dfs(const struct TreeNode* root, int* move) {
    int moveleft = 0;
    int moveright = 0;
    if (root == NULL) {
        return 0;
    }
    if (root->left) {
        moveleft = dfs(root->left, move);
    }
    if (root->right) {
        moveright = dfs(root->right, move);
    }
    (*move) += abs(moveleft) + abs(moveright);
    return moveleft + moveright + root->val - 1;
}

int distributeCoins(struct TreeNode* root) {
    int move = 0;
    dfs(root, &move);
    return move;
}

