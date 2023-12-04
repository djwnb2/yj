#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int sum = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if (root != nullptr)
        {
            bstToGst(root->right);
            sum += root->val;
            root->val = sum;
            bstToGst(root->left);
        }
        return root;
    }
};