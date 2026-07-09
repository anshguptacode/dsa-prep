/*
 * Problem: Binary Search (LeetCode #704)
 * Description: Given a sorted array and a target value, return the index if found, else -1.
 * Approach: Classic binary search - divide search space in half each iteration
 * Time Complexity: O(log n) - logarithmic search
 * Space Complexity: O(1) - constant space
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 7, 9};
    int target;

    cout << "Enter target: ";
    cin >> target;

    Solution sol;
    cout << sol.search(nums, target) << endl;
    return 0;
}
