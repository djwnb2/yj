#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        int leveSize = 0;
        if (root)
        {
            q.push(root);
            leveSize = 1;
        }
        vector<vector<int>> vv;
        while (!q.empty())
        {
            vector<int>v;
            while (leveSize--)
            {
                TreeNode* front = q.front();
                q.pop();
                v.push_back(front->val);
                if (front->left)
                {
                    q.push(front->left);
                }
                if (front->right)
                {
                    q.push(front->right);
                }
            }
            vv.push_back(v);
            leveSize = q.size();
        }

        return vv;
    }
};