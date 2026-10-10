class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2,
                               int k1, int k2) {
        int n = nums1.size();
        long long k = (long long)k1 + k2;

        vector<int> diff(n);
        int maxDiff = 0;

        for (int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            maxDiff = max(maxDiff, diff[i]);
        }

        int low = 0, high = maxDiff;

        while (low < high) {
            int mid = low + (high - low) / 2;
            long long needed = 0;

            for (int d : diff) {
                if (d > mid) {
                    needed += d - mid;
                }
            }

            if (needed <= k) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        long long used = 0;

        for (int& d : diff) {
            if (d > low) {
                used += d - low;
                d = low;
            }
        }

        long long remaining = k - used;

        for (int& d : diff) {
            if (remaining > 0 && d == low && d > 0) {
                d--;
                remaining--;
            }
        }

        long long sum = 0;

        for (int d : diff) {
            sum += 1LL * d * d;
        }

        return sum;
    }
};