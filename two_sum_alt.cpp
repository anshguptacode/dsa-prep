/*\n * Problem: Two Sum - Alternative Implementation (LeetCode #1)\n * Description: Given an array of integers nums and an integer target, return the indices\n *              of the two numbers that add up to the target.\n * Approach: Use an unordered_map to store elements and their indices for O(1) lookup\n * Time Complexity: O(n) - single pass through array\n * Space Complexity: O(n) - hash map storage\n * Note: Alternative implementation using function instead of class\n */\n\n#include <iostream>\n#include <vector>\n#include <unordered_map>\nusing namespace std;\n\nvector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }

        mp[nums[i]] = i;
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << "Indices: ";
    for (int x : ans)
        cout << x << " ";

    return 0;
}