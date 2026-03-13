//100. Same Tree


//1)Approch: Recursion
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
        {
            return true;
        }
        if(!p || !q)
        {
            return false;
        }
        if(p->val != q->val)
        {
            return false;
        }
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        
    }
};

//2)using qu

bool isSameTree(TreeNode* p, TreeNode* q) {
    queue<pair<TreeNode*, TreeNode*>> qu;
    qu.push({p, q});

    while (!qu.empty()) {
        auto [a, b] = qu.front(); qu.pop();

        if (!a && !b) continue;       // both null → ok
        if (!a || !b) return false;   // one null  → not same
        if (a->val != b->val) return false;

        qu.push({a->left,  b->left});
        qu.push({a->right, b->right});
    }
    return true;
}
```

---

## The 3 Base Cases — Memorize These
```
1. (!p && !q)      → true   (both null, perfect match)
2. (!p || !q)      → false  (one exists, other doesn't)
3. (p->val != q->val) → false  (values differ)