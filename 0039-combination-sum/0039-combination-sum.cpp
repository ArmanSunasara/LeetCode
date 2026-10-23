
class Solution {
    int n;

    void solve(vector<int>& candidates, int target,
               vector<vector<int>>& ans, int idx,
               int sum, vector<int>& temp) {

        if (sum == target) {
            ans.push_back(temp);
            return;
        }

        if (sum > target) {
            return;
        }

        for (int i = idx; i < n; i++) {
            temp.push_back(candidates[i]);

            solve(candidates, target, ans, i,
                  sum + candidates[i], temp);

            temp.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates,
                                       int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        n = candidates.size();

        solve(candidates, target, ans, 0, 0, temp);

        return ans;
    }
};
