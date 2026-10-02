class Solution {
private:
    void dfs(int n, int open, int close, string current,
             vector<string>& ans) {
        if (current.size() == 2 * n) {
            ans.push_back(current);
            return;
        }
        if (open < n) {
            dfs(n, open + 1, close, current + "(", ans);
        }
        if (close < open) {
            dfs(n, open, close + 1, current + ")", ans);
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        dfs(n, 0, 0, "", ans);

            return ans;
    }
};