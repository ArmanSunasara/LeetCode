class Solution {
public:
    int climbStairs(int n) {
        int prev_prev=1;
        int prev=2;
        if(n<3)
        {
            return n;
        }
        int curr;
        for(int i=3;i<=n;i++)
        {
            curr =prev_prev+prev;
            prev_prev =prev;
            prev=curr;
        }
        return curr;
    }
};