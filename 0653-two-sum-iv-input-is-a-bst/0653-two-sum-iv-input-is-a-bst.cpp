class Solution {
    unordered_set<int> set;

public:
    bool findTarget(TreeNode* root, int k) {
        if (!root) return false;
        if (set.count(k - root->val)) return true;
        set.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};