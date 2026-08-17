class Solution {
private:
    void explore(unordered_map<char, string>& sp,
                 vector<string>& ans,
                 string& temp,
                 int idx,
                 string& digits) {
        
        if (temp.size() == digits.size()) {
            ans.push_back(temp);
            return;
        }

        char ch = digits[idx];
        string str = sp[ch];

        for (int i = 0; i < str.length(); i++) {
            temp.push_back(str[i]);

            explore(sp, ans, temp, idx + 1, digits);

            temp.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        if (digits.empty()) {
            return ans;
        }

        unordered_map<char, string> sp;

        sp['2'] = "abc";
        sp['3'] = "def";
        sp['4'] = "ghi";
        sp['5'] = "jkl";
        sp['6'] = "mno";
        sp['7'] = "pqrs";
        sp['8'] = "tuv";
        sp['9'] = "wxyz";

        string temp;

        explore(sp, ans, temp, 0, digits);

        return ans;
    }
};