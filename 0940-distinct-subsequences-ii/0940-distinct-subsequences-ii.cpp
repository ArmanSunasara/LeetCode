class Solution {
    static constexpr int MOD = 1e9 + 7;
public:
    int distinctSubseqII(string s) {
        long long total = 0;
        vector<long long> end(26);

        for (char c : s) {
            long long newCount = (total + 1) % MOD;

            total = (total + newCount - end[c - 'a'] + MOD) % MOD;

            end[c - 'a'] = newCount;
        }
        return total;
    }
};