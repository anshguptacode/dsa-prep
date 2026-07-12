/*
 * Problem: Contains Duplicate (LeetCode #217)
 * Description: Given an integer array, determine if any value appears at least twice in it.
 * Approach: Use unordered_set to track seen elements for O(1) lookup.
 * Edge Cases: empty input, repeated values, and negative numbers.
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
    vector<int> sample = {1, 2, 3, 4};
    vector<int> duplicate = {1, 2, 2, 3};
    vector<int> empty;
    vector<int> negative = {-1, -2, -3, -1};

    Solution sol;
    cout << "Sample case: " << (sol.containsDuplicate(sample) ? "true" : "false") << endl;
    cout << "Duplicate values: " << (sol.containsDuplicate(duplicate) ? "true" : "false") << endl;
    cout << "Empty input: " << (sol.containsDuplicate(empty) ? "true" : "false") << endl;
    cout << "Negative values: " << (sol.containsDuplicate(negative) ? "true" : "false") << endl;

    return 0;
}
