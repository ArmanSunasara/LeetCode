#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Step 1: Get the sizes of both input arrays.
        int n = nums1.size();
        int m = nums2.size();

        // Step 2: Merge both arrays into a single vector.
        vector<int> merged;
        
        // Insert elements from nums1
        for (int i = 0; i < n; i++) {
            merged.push_back(nums1[i]);
        }
        
        // Insert elements from nums2
        for (int i = 0; i < m; i++) {
            merged.push_back(nums2[i]);
        }

        // Step 3: Sort the merged array to maintain order.
        sort(merged.begin(), merged.end());

        // Step 4: Calculate the total number of elements.
        int total = merged.size();

        // Step 5: If total number of elements is odd -> return middle element.
        if (total % 2 == 1) {
            return static_cast<double>(merged[total / 2]);  
        } 
        // Step 6: If total number of elements is even -> take average of two middle elements.
        else {
            int middle1 = merged[total / 2 - 1];
            int middle2 = merged[total / 2];
            return (static_cast<double>(middle1) + static_cast<double>(middle2)) / 2.0;
        }
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << "Median: " << sol.findMedianSortedArrays(nums1, nums2) << endl;  
    // Output: 2.0

    // Example 2
    nums1 = {1, 2};
    nums2 = {3, 4};
    cout << "Median: " << sol.findMedianSortedArrays(nums1, nums2) << endl;  
    // Output: 2.5

    // Example 3 (odd total length)
    nums1 = {0, 0};
    nums2 = {0, 0};
    cout << "Median: " << sol.findMedianSortedArrays(nums1, nums2) << endl;  
    // Output: 0.0

    return 0;
}
