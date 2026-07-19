/*
 * Problem: Longest Palindromic Substring (LeetCode #5)
 * Description: Given a string s, return the longest palindromic substring in s.
 * Approach: Expand around each possible palindrome center and track the longest result.
 * Time Complexity: O(n^2) - expand around each center
 * Space Complexity: O(1) - constant extra memory
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestPalindrome(const string &s) {
        if (s.empty()) {
            return "";
        }

        int n = s.size();
        int start = 0;
        int maxLen = 1;

        for (int center = 0; center < n; ++center) {
            expandAroundCenter(s, center, center, start, maxLen);       // odd length
            expandAroundCenter(s, center, center + 1, start, maxLen);   // even length
        }

        return s.substr(start, maxLen);
    }

private:
    void expandAroundCenter(const string &s, int left, int right, int &start, int &maxLen) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            --left;
            ++right;
        }

        int length = right - left - 1;
        if (length > maxLen) {
            maxLen = length;
            start = left + 1;
        }
    }
};

int main() {
    Solution sol;
    vector<string> tests = {
        "babad",
        "cbbd",
        "a",
        "ac",
        "forgeeksskeegfor"
    };

    for (const auto &s : tests) {
        cout << "Input: " << s << " -> Longest Palindrome: " << sol.longestPalindrome(s) << endl;
    }

    return 0;
}
