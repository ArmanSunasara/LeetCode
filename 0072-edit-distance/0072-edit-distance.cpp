
class Solution {
    int dp[501][501];
public:
    int solve(string& a, string& b, int i, int j) {
        if (i == a.size()) {
            return b.size() - j;
        }

        if (j == b.size()) {
            return a.size() - i;
        }

        if (a[i] == b[j]) {
            return dp[i][j] = solve(a, b, i + 1, j + 1);
        }
        if(dp[i][j] !=-1) return dp[i][j];

        int insertOp = 1 + solve(a, b, i, j + 1);
        int deleteOp = 1 + solve(a, b, i + 1, j);
        int replaceOp = 1 + solve(a, b, i + 1, j + 1);

        return dp[i][j] = min({insertOp, deleteOp, replaceOp});
    }

    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        return solve(word1, word2, 0, 0);
    }
};
