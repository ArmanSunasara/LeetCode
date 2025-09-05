#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;


    bool isValid(string s) 
    {
        stack<char> st; // stack to store opening brackets
        
        for (char ch : s) {
            // Push opening brackets
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            else {
                // If closing bracket and stack is empty -> invalid
                if (st.empty()) return false;
                
                // Check matching pairs
                char top = st.top();
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
                st.pop(); // matched, remove from stack
            }
        }
        // If stack is empty -> all matched
        return st.empty();
    }

int main()
{
    string s = "([)]";

    cout<<isValid(s);
}