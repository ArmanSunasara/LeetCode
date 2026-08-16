class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {0};

        for (int x : stones) {
            cnt[x % 3]++;
        }

        int zero = cnt[0];
        int one = cnt[1];
        int two = cnt[2];

        if (zero % 2 == 0) {
            return one > 0 && two > 0;
        }

        return abs(one - two) > 2;
    }
};