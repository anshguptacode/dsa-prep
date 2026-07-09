/*
 * Problem: Group Anagrams (LeetCode #49)
 * Description: Given an array of strings, group anagrams together.
 * Approach: Sort each word and use as key in hash map to group anagrams
 * Time Complexity: O(n * k log k) - where n is number of words, k is max word length
 * Space Complexity: O(n * k) - store all characters
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> groups;
        for (const string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            groups[key].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& entry : groups) {
            result.push_back(entry.second);
        }
        return result;
    }
};

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution sol;
    vector<vector<string>> result = sol.groupAnagrams(strs);
    for (auto& group : result) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << "| ";
    }
    cout << endl;
    return 0;
}
