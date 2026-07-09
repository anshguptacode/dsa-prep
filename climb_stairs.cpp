/*
 * Problem: Climbing Stairs (LeetCode #70)
 * Description: Climb to the top of n stairs. Each time you climb 1 or 2 steps.
 *              How many distinct ways can you climb to the top?
 * Approach: Dynamic Programming - f(n) = f(n-1) + f(n-2), similar to Fibonacci
 * Time Complexity: O(n) - compute each value once
 * Space Complexity: O(1) - only store last two values
 */

#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int a = 1, b = 2;
        for (int i = 3; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};

int main() {
    Solution sol;
    cout << sol.climbStairs(5) << endl;
    return 0;
}
