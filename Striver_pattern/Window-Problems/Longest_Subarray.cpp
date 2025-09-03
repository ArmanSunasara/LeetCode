#include <iostream>
#include <vector>
using namespace std;

int L_a(vector<int> &nums, int k)
{
    
    int M_l = 0;

    for (int i = 0; i <= nums.size()-1; i++)
    {
        int C_Sum = 0;

        for (int j = i; j <= nums.size()-1; j++)
        {
            C_Sum = C_Sum + nums[j];

            if (C_Sum > k)
            {
                break;
            }

            if(C_Sum<=k)
            {
                M_l = max(M_l,j-i+1);


            }
        }
    }
    return M_l;
}

int main()
{
    vector<int> nums = {2, 5, 1, 7, 10};
    int k = 14;

   cout<<L_a(nums, k);
}