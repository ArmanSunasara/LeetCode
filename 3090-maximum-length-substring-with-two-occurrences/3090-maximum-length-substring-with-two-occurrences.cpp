class Solution {
public:
    int maximumLengthSubstring(string s) {

        int maxl = 0;
        for (int i = 0; i < s.length(); i++) {
            unordered_map<char, int> hashmap;
            for (int j = i; j < s.length(); j++) {
                hashmap[s[j]]++;
                if (hashmap[s[j]] > 2) {
                    break;
                }

                maxl = max(maxl, j - i + 1);
            }
        }
        return maxl;
    }
};