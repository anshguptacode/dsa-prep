/*
 * Problem: Maximum Subarray (LeetCode #53)
 * Description: Given an integer array, find the contiguous subarray with the largest sum.
 * Approach: Kadane's Algorithm - maintain current sum and best sum seen so far
 * Time Complexity: O(n) - single pass
 * Space Complexity: O(1) - constant space
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
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
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution sol;
    cout << sol.maxSubArray(nums) << endl;
    return 0;
}
