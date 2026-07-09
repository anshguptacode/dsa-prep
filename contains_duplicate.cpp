/*
 * Problem: Contains Duplicate (LeetCode #217)
 * Description: Given an integer array, determine if any value appears at least twice in it.
 * Approach: Use unordered_set to track seen elements for O(1) lookup
 * Time Complexity: O(n) - single pass through array
 * Space Complexity: O(n) - set storage
 */

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    cout << (sol.containsDuplicate(nums) ? "true" : "false") << endl;

    return 0;
}
