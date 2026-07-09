/*
 * Problem: Rotate Array (LeetCode #189)
 * Description: Rotate an array to the right by k steps in-place.
 *              Example: [1,2,3,4,5,6] rotated by 2 becomes [5,6,1,2,3,4]
 * Approach: Use reversal algorithm - reverse entire array, then reverse first k and last n-k elements
 * Time Complexity: O(n) - three passes through array
 * Space Complexity: O(1) - in-place rotation
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    Solution sol;
    sol.rotate(nums, 2);
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
