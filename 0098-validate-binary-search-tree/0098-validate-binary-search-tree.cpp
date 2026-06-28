class Solution {
public:
    bool helper(TreeNode* root, long long low, long long high) {
        if (root == nullptr)
            return true;

        if (root->val <= low || root->val >= high)
            return false;

        return helper(root->left, low, root->val) &&
               helper(root->right, root->val, high);
    }

    bool isValidBST(TreeNode* root) {
        return helper(root, LLONG_MIN, LLONG_MAX);
    }
};