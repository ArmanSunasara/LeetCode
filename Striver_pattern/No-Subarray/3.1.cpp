#include <iostream>
#include <vector>

using namespace std;

int C_Subarray(vector<int> &arr, int k, int count)
{

    for (int i = 0; i <= arr.size()-1; i++)
    {
        int sum = 0;
        for (int j = i; j <= arr.size()-1; j++)
        {
            sum = sum + arr[j];
            if (sum <= k)
            {
                count++;
            }
           else
            {
                break;
            }
        }
        // sum =sum -arr[i];
    }
    return count;
}

int main()
{
    vector<int> arr = {9, 5, 1, 2, 3, 5, 7};
    int k = 14;
    int count = 0;
    cout << C_Subarray(arr, k, count);
}
