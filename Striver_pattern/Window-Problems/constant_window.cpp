#include <iostream>
#include <vector>
using namespace std;

int max_sum(vector<int> &nums, int k)
{
    int Max_Sum = 0;
    int C_Sum = 0;
    int l = 0;
    int r = k - 1;

    for (int i = l; i <= r; i++)
    {
        C_Sum = C_Sum + nums[i];
    }

    Max_Sum = C_Sum;

    while (r < nums.size() - 1)
    {
        C_Sum = C_Sum - nums[l];
        l++;
        r++;
        C_Sum = C_Sum + nums[r];

        Max_Sum = max(Max_Sum, C_Sum);
    }

    return Max_Sum;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 4;

    cout << max_sum(nums, k);
}