#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    int maxArea(vector<int>& height) {

        int area=0,Max_Area=0,n=height.size();

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                area=min(height[i],height[j])*(j-i);
                Max_Area=max(Max_Area,area);
            }
        }
        return Max_Area;
    }
};
int main() {
    Solution solution;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << solution.maxArea(height) << endl;
    return 0;
}