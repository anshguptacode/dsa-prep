/*
 * Problem: Merge Sorted Array (LeetCode #88)
 * Description: Merge two sorted arrays nums1 and nums2 into nums1 in-place.
 *              nums1 has enough space (size m + n) to hold all elements.
 * Approach: Two pointers from the end, fill nums1 from right to left to avoid overwriting
 * Time Complexity: O(m + n) - single pass
 * Space Complexity: O(1) - in-place merge
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};

    Solution sol;
    sol.merge(nums1, 3, nums2, 3);

    for (int x : nums1) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
