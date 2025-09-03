#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countSubarraysWithSumLEQ(vector<int>& arr, int k) {
    int count = 0;
    int current_sum = 0;
    unordered_map<int, int> prefix_sum_count;
    prefix_sum_count[0] = 1; // Base case: empty subarray has sum 0

    for (int num : arr) {
        current_sum += num;

        // Check for all previous prefix sums that when subtracted from current_sum give a sum <= k
        for (int prev_sum = current_sum - k; prev_sum >= 0; --prev_sum) {
            if (prefix_sum_count.find(prev_sum) != prefix_sum_count.end()) {
                count += prefix_sum_count[prev_sum];
            }
        }

        // Update the prefix sum count
        prefix_sum_count[current_sum]++;
    }

    return count;
}

int main() {
    vector<int> arr = {9, 5, 1, 2, 3, 5, 7};
    int k = 14;
    cout << "Number of subarrays with sum <= " << k << ": " << countSubarraysWithSumLEQ(arr, k) << endl;
    return 0;
}