/*
 * Problem: Plus One (LeetCode #66)
 * Description: Given a non-negative integer represented as an array of digits,
 *              increment the integer by one.
 * Approach: Traverse from right to left, handle carry propagation
 * Time Complexity: O(n) - worst case all digits are 9
 * Space Complexity: O(1) - excluding output array
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    vector<int> digits = {9, 9, 9};
    Solution sol;
    vector<int> result = sol.plusOne(digits);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
