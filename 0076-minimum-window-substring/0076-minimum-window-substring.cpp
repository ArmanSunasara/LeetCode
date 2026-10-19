
class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size())
            return "";

        vector<int> freq(128, 0);

        for (char c : t) {
            freq[c]++;
        }

        int left = 0;
        int start = 0;
        int minLen = INT_MAX;
        int required = t.size();

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            if (freq[c] > 0) {
                required--;
            }
            freq[c]--;

            while (required == 0) {
                int len = right - left + 1;

                if (len < minLen) {
                    minLen = len;
                    start = left;
                }

                char leftChar = s[left];
                freq[leftChar]++;

                if (freq[leftChar] > 0) {
                    required++;
                }

                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
