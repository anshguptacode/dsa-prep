/*
 * Problem: Two Sum (LeetCode #1)
 * Description: Given an array of integers nums and an integer target, return the indices
 *              of the two numbers that add up to the target.
 * Approach: Use an unordered_map to store elements and their indices for O(1) lookup
 * Time Complexity: O(n) - single pass through array
 * Space Complexity: O(n) - hash map storage
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexMap;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (indexMap.count(complement)) {
                return {indexMap[complement], i};
            }
            indexMap[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
