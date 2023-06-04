#define _CRT_SECURE_NO_WARNINGS

bool App(struct TreeNode* root, int* nums, int* i)
{
    if (root == NULL)
    {
        return;
    }
    App(root->left, nums, i);
    nums[(*i)++] = root->val;
    App(root->right, nums, i);
}
bool findTarget(struct TreeNode* root, int k) {
    if (root->left == NULL && root->right == NULL)
    {
        return NULL;
    }
    int nums[10000];
    int i = 0;
    App(root, nums, &i);
    int j = 0;

    int left = nums[j];
    int right = nums[i - 1];
    while (left < right)
    {
        if (left + right == k)
        {
            return true;
        }
        else if (left + right > k)
        {
            i--;
            right = nums[i - 1];
        }
        else
        {
            j++;
            left = nums[j];
        }
    }
    return false;
}