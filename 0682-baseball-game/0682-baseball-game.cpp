class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i] == "C") {
                st.pop();
            } else if (operations[i] == "D") {
                st.push(st.top() * 2);
            } else if (operations[i] == "+") {
                int temp1 = st.top();
                st.pop();
                int sum = temp1 + st.top();
                st.push(temp1);
                st.push(sum);
            } else {
                int num = stoi(operations[i]);
                st.push(num);
            }
        }
        int ans = 0;
        while (!st.empty()) {
            ans = ans + st.top();
            st.pop();
        }
        return ans;
    }
};