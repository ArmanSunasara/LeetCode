class Solution {
public:
    int fib(int n) {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        int prev_prev = 0;
        int prev = 1;
        int curr;

        for (int i = 2; i <= n; i++) {
            curr = prev + prev_prev;
            prev_prev=prev;
            prev=curr;
        }
        return curr;
    }
};