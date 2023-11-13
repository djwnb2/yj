#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Solution {
public:
    string tree2str(TreeNode* root) {
        string s;
        if (root == nullptr)
        {
            return s;
        }
        s += to_string(root->val);
        if (root->left || root->right)
        {
            s += '(';
            s += tree2str(root->left);
            s += ')';
        }
        if (root->right)
        {
            s += '(';
            s += tree2str(root->right);
            s += ')';
        }
        return s;


    }
};