#define _CRT_SECURE_NO_WARNINGS

int minDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;

    // �����ǰ�ڵ���Ҷ�ӽڵ㣬���� 1
    if (root->left == NULL && root->right == NULL)
        return 1;

    // ���������Ϊ�գ��ݹ��������������С���
    if (root->left == NULL)
        return minDepth(root->right) + 1;

    // ���������Ϊ�գ��ݹ��������������С���
    if (root->right == NULL)
        return minDepth(root->left) + 1;

    // ���������������Ϊ�գ��ݹ����������������С���
    int leftDepth = minDepth(root->left);
    int rightDepth = minDepth(root->right);

    // ����������������С��ȼ��ϵ�ǰ�ڵ����ȣ���1��
    return (leftDepth < rightDepth) ? leftDepth + 1 : rightDepth + 1;
}