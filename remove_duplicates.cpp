/*
 * Problem: Remove Duplicates from Sorted Array (LeetCode #26)
 * Description: Remove duplicates from a sorted array in-place and return the count of unique elements.
 * Approach: Two pointers - one for writing position, one for reading
 * Time Complexity: O(n) - single pass
 * Space Complexity: O(1) - in-place modification
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    Solution sol;
    int length = sol.removeDuplicates(nums);
    cout << length << endl;
    return 0;
}
