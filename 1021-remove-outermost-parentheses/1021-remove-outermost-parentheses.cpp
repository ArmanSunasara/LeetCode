class Solution {
public:
    string removeOuterParentheses(string s) {
        string temp = "";
        string ans = "";
        int k = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                k++;
            }
            if (s[i] == ')') {
                k--;
            }
            temp.push_back(s[i]);
            if (k == 0) {
                for (int i = 1; i < temp.size() - 1; i++) {
                    ans.push_back(temp[i]);
                }
                temp.clear();
            }
        }
        return ans;
    }
};