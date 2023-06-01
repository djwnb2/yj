#define _CRT_SECURE_NO_WARNINGS

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

// 判断节点是否为叶子节点
bool isLeaf(struct TreeNode* node) {
    return (node->left == NULL && node->right == NULL);
}

// 深度优先搜索遍历二叉树，获取叶值序列
void dfs(struct TreeNode* node, int* leaf_values, int* index) {
    if (node == NULL) {
        return;
    }

    if (isLeaf(node)) {
        leaf_values[(*index)++] = node->val;
        return;
    }

    dfs(node->left, leaf_values, index);
    dfs(node->right, leaf_values, index);
}

// 判断两棵二叉树是否是叶相似的
bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {
    int leaf_values1[1000]; // 存储树1的叶值序列
    int leaf_values2[1000]; // 存储树2的叶值序列
    int index1 = 0; // 叶值序列1的索引
    int index2 = 0; // 叶值序列2的索引

    // 获取树1的叶值序列
    dfs(root1, leaf_values1, &index1);

    // 获取树2的叶值序列
    dfs(root2, leaf_values2, &index2);

    // 比较两棵树的叶值序列是否相同
    if (index1 != index2) {
        return false;
    }

    for (int i = 0; i < index1; i++) {
        if (leaf_values1[i] != leaf_values2[i]) {
            return false;
        }
    }

    return true;
}

// 创建二叉树节点
struct TreeNode* createNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main() {
    // 创建两棵树
    struct TreeNode* root1 = createNode(3);
    root1->left = createNode(5);
    root1->right = createNode(1);
    root1->left->left = createNode(6);
    root1->left->right = createNode(2);
    root1->right->left = createNode(9);
    root1->right->right = createNode(8);
    root1->left->right->left = createNode(7);
    root1->left->right->right = createNode(4);

    struct TreeNode* root2 = createNode(3);
    root2->left = createNode(5);
    root2->right = createNode(1);
    root2->left->left = createNode(6);
    root2->left->right = createNode(7);
    root2->right->left = createNode(4);
    root2->right->right = createNode(2);
    root2->right->right->left = createNode(9);
    root2->right->right->right = createNode(8);

    // 判断两棵树是否是叶相似的
    bool isSimilar = leafSimilar(root1, root2);
    printf("Are the trees leaf-similar? %s\n", isSimilar ? "Yes" : "No");

    return 0;
}
