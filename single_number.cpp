/*
 * Problem: Single Number (LeetCode #136)
 * Description: Given a non-empty array where every element appears twice except one,
 *              find the single element that appears only once.
 * Approach: Use XOR bit manipulation - XOR of two same numbers is 0, XOR of 0 and x is x
 * Time Complexity: O(n) - single pass
 * Space Complexity: O(1) - constant space, no extra data structures
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    Solution sol;
    cout << sol.singleNumber(nums) << endl;
    return 0;
}
