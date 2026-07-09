/*
 * Problem: Majority Element (LeetCode #169)
 * Description: Given an array, find the element that appears more than n/2 times.
 *              Guaranteed that the majority element always exists in the array.
 * Approach: Boyer-Moore Majority Voting Algorithm
 * Time Complexity: O(n) - single pass
 * Space Complexity: O(1) - constant space
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }
        return candidate;
    }
};

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    Solution sol;
    cout << sol.majorityElement(nums) << endl;
    return 0;
}
