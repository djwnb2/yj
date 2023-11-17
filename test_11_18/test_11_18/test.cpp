#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    TreeNode* _buildTree(vector<int>& preorder, vector<int>& inorder, int* i, int begin, int end) {
        if (begin > end) return nullptr;
        int rooti = begin;
        while (rooti <= end)
        {
            if (inorder[rooti] == preorder[*i])
            {
                break;
            }
            rooti++;

        }

        TreeNode* root = new TreeNode(preorder[(*i)++]);
        root->left = _buildTree(preorder, inorder, i, begin, rooti - 1);
        root->right = _buildTree(preorder, inorder, i, rooti + 1, end);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i = 0;
        TreeNode* root = _buildTree(preorder, inorder, &i, 0, preorder.size() - 1);
        return root;
    }
};