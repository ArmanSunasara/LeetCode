class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int count = 0;
        vector<int> temp(n, 0);
        for (int i = n - 1; i >= 0; i--) {
            if (i == 0 && digits[i] + 1 == 10) {

                temp.push_back(1);
                reverse(temp.begin(), temp.end());
                count++;
            } else {
                if (digits[i] + 1 == 10) {
                    digits[i] = 0;
                } else {
                    digits[i] = digits[i] + 1;
                    break;
                }
            }
        }

        return count > 0 ? temp : digits;
    }
};