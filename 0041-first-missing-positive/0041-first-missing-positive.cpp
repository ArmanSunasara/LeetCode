class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        while (i < n) {
            if (nums[i] > 0 && nums[i] <= n) {
                int curr = nums[i] - 1;

                if (nums[i] != nums[curr]) {
                    swap(nums[i], nums[curr]);
                } else {
                    i++;
                }
            } else {
                i++;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i + 1)
                return i + 1;
        }
        return n + 1;
    }
};