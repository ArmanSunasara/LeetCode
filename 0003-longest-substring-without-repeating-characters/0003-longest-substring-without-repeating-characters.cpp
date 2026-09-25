class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i = 0, j = 0;
        int maxl = 0;

        while (j < s.size()) {
            if (st.find(s[j]) == st.end()) {
                st.insert(s[j]);
                maxl = max(maxl, j - i + 1);
                j++;
            } else {
                st.erase(s[i]);
                i++;
            }
        }

        return maxl;
    }
};