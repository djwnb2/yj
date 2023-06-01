#define _CRT_SECURE_NO_WARNINGS

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

// �жϽڵ��Ƿ�ΪҶ�ӽڵ�
bool isLeaf(struct TreeNode* node) {
    return (node->left == NULL && node->right == NULL);
}

// �������������������������ȡҶֵ����
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

// �ж����ö������Ƿ���Ҷ���Ƶ�
bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {
    int leaf_values1[1000]; // �洢��1��Ҷֵ����
    int leaf_values2[1000]; // �洢��2��Ҷֵ����
    int index1 = 0; // Ҷֵ����1������
    int index2 = 0; // Ҷֵ����2������

    // ��ȡ��1��Ҷֵ����
    dfs(root1, leaf_values1, &index1);

    // ��ȡ��2��Ҷֵ����
    dfs(root2, leaf_values2, &index2);

    // �Ƚ���������Ҷֵ�����Ƿ���ͬ
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

// �����������ڵ�
struct TreeNode* createNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main() {
    // ����������
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

    // �ж��������Ƿ���Ҷ���Ƶ�
    bool isSimilar = leafSimilar(root1, root2);
    printf("Are the trees leaf-similar? %s\n", isSimilar ? "Yes" : "No");

    return 0;
}
