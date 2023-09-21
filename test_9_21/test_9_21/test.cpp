#define _CRT_SECURE_NO_WARNINGS

lass Solution{
public:
    bool LeafNode(TreeNode * node)
    {
        return !node->left && !node->right;
    }
    int dfs(TreeNode * node) {
           int ans = 0;
           if (node->left)
           {
               ans += LeafNode(node->left) ? node->left->val : dfs(node->left);
           }
           if (node->right && !LeafNode(node->right))
           {
               ans += dfs(node->right);
           }
           return ans;
    }
    int sumOfLeftLeaves(TreeNode * root) {
        return root ? dfs(root) : 0;
    }


};