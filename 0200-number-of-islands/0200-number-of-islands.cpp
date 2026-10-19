class Solution {
    int n;
    int m;

private:
    void solve(int row, int col, vector<vector<int>>& vis,
               vector<vector<char>>& grid) {
        queue<pair<int, int>> q;
        vis[row][col] = 1;
        q.push({row, col});

        int rowvis[] = {-1, 0, 1, 0};
        int colvis[] = {0, 1, 0, -1};

        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int movrow = row + rowvis[i];
                int movcol = col + colvis[i];

                if (movrow >= 0 && movrow < n && movcol >= 0 && movcol < m &&
                    grid[movrow][movcol] == '1' && !vis[movrow][movcol]) {
                    vis[movrow][movcol] = 1;
                    q.push({movrow, movcol});
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {

        n = grid.size();
        m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    count++;
                    solve(i, j, vis, grid);
                }
            }
        }
        return count;
    }
};