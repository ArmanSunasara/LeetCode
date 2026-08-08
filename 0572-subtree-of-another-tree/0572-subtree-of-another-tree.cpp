class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;
        if (p == nullptr || q == nullptr) return false;
        if (p->val != q->val) return false;
        
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr) return false;
        if (subRoot == nullptr) return true;
        
        if (isSameTree(root, subRoot)) return true;
        
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
