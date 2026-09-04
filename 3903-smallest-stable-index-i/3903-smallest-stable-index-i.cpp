class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int maxel = INT_MIN;
            int minel = INT_MAX;

            for (int p = 0; p <= i; p++) {
                maxel = max(maxel, nums[p]);
            }

            for (int q = i; q < n; q++) {
                minel = min(minel, nums[q]);
            }

            if (maxel - minel <= k) {
                return i;      // first stable index
            }
        }

        return -1;
    }
};