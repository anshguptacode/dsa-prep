/*
 * Problem: Maximum Subarray (LeetCode #53)
 * Description: Given an integer array, find the contiguous subarray with the largest sum.
 * Approach: Kadane's Algorithm - maintain the current sum and the best sum seen so far.
 * Edge Cases: empty input, single element, and all-negative arrays.
 * Time Complexity: O(n) - single pass
 * Space Complexity: O(1) - constant space
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int current = nums[0];
        int best = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            current = max(nums[i], current + nums[i]);
            best = max(best, current);
        }

        return best;
    }
};

int main() {
    vector<int> sample = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> allNegative = {-1, -2, -3, -4};
    vector<int> single = {5};

    Solution sol;
    cout << "Sample case: " << sol.maxSubArray(sample) << endl;
    cout << "All negative numbers: " << sol.maxSubArray(allNegative) << endl;
    cout << "Single element: " << sol.maxSubArray(single) << endl;
    return 0;
}
