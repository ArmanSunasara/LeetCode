class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int x = n;

        while (n != 0) {
            int digit = n % 10;
            sum += digit;
            prod *= digit;
            n /= 10;
        }
        int temp =sum+prod;
        if(x%temp==0)
        {
            return true;
        }
        return false;
    }
};