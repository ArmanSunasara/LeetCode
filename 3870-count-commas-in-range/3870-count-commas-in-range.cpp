class Solution {
    void solve(int p ,int n,long long & comma)
    {
        if(p<4 || n<1000 ) return;
        comma++;
        solve(p,n-1,comma);

    }
public:
    int countCommas(int n) {
        int p=0;
        long long comma=0;
        int temp =n;
        while(temp!=0)
        {
            p++;
            temp=temp/10;
        }
        solve(p,n,comma);

        return comma;
    }
};