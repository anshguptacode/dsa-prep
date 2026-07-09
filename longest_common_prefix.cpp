/*
 * Problem: Longest Common Prefix (LeetCode #14)
 * Description: Write a function to find the longest common prefix string amongst an array of strings.
 * Approach: Horizontal scanning - compare prefix with each string character by character
 * Time Complexity: O(n * m) - where n is number of strings, m is length of shortest string
 * Space Complexity: O(1) - excluding output
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    Solution sol;
    cout << sol.longestCommonPrefix(strs) << endl;
    return 0;
}
