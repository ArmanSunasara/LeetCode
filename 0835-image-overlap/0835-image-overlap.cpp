class Solution {
private:
    int countone(vector<vector<int>>& A, vector<vector<int>>& B, int rowoff,
                 int coloff, int n) {
        int count = 0;
        int temprow, tempcol;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                temprow = i + rowoff;
                tempcol = j + coloff;

                if (temprow < 0 || temprow >= n || tempcol < 0 || tempcol >= n)
                    continue;
                if (A[i][j] == 1 && B[temprow][tempcol] == 1)
                    count++;
            }
        }
        return count;
    }

public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        int n = A.size();
        int MaxOverlap = 0;

        for (int rowoff = -n + 1; rowoff < n; rowoff++) {
            for (int coloff = -n + 1; coloff < n; coloff++) {
                int count = countone(A, B, rowoff, coloff, n);

                MaxOverlap = max(MaxOverlap, count);
            }
        }
        return MaxOverlap;
    }
};