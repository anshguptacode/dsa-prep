/*
 * Problem: Best Time to Buy and Sell Stock (LeetCode #121)
 * Description: Given stock prices, find the maximum profit from buying and selling once.
 *              Must buy before sell. If no profit possible, return 0.
 * Approach: Track minimum price seen so far, calculate profit at each price
 * Time Complexity: O(n) - single pass
 * Space Complexity: O(1) - constant space
 */

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            }

            int profit = price - minPrice;

            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << "Maximum Profit = " << sol.maxProfit(prices) << endl;

    return 0;
}