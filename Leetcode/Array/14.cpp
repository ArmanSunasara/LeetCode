#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // If the input vector is empty, return an empty string.
        if (strs.empty()) {
            return "";
        }

        // If the input vector contains only one string, return that string.
        if (strs.size() == 1) {
            return strs[0];
        }

        // Initialize the longest common prefix to the first string in the vector.
        string prefix = strs[0];

        // Iterate over the remaining strings in the vector.
        for (size_t i = 1; i < strs.size(); ++i) {
            // Find the length of the common prefix between the current prefix and the current string.
            size_t j = 0;
            while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
                ++j;
            }

            // Update the prefix to the common prefix.
            prefix = prefix.substr(0, j);

            // If the prefix is empty, then there is no common prefix.
            if (prefix.empty()) {
                return "";
            }
        }

        // Return the longest common prefix.
        return prefix;
    }
};

// Example Usage (for testing):
// int main() {
//   Solution sol;
//   vector<string> strs1 = {"flower","flow","flight"};
//   cout << sol.longestCommonPrefix(strs1) << endl; // Output: fl

//   vector<string> strs2 = {"dog","racecar","car"};
//   cout << sol.longestCommonPrefix(strs2) << endl; // Output: ""

//   vector<string> strs3 = {""};
//   cout << sol.longestCommonPrefix(strs3) << endl; // Output: ""

//   vector<string> strs4 = {"a"};
//   cout << sol.longestCommonPrefix(strs4) << endl; // Output: a

//   vector<string> strs5 = {"ab", "a"};
//   cout << sol.longestCommonPrefix(strs5) << endl; // Output: a

//   return 0;
// }
