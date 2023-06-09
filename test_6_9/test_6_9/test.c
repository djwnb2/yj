#define _CRT_SECURE_NO_WARNINGS
//114. 二叉树展开为链表
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int num;

void flatten(struct TreeNode* root) {
    num = 0;
    struct TreeNode** l = (struct TreeNode**)malloc(0);
    preorderTraversal(root, &l);
    for (int i = 1; i < num; i++) {
        struct TreeNode* prev = l[i - 1], * curr = l[i];
        prev->left = NULL;
        prev->right = curr;
    }
    free(l);
}

void preorderTraversal(struct TreeNode* root, struct TreeNode*** l) {
    if (root != NULL) {
        num++;
        (*l) = (struct TreeNode**)realloc((*l), sizeof(struct TreeNode*) * num);
        (*l)[num - 1] = root;
        preorderTraversal(root->left, l);
        preorderTraversal(root->right, l);
    }
}