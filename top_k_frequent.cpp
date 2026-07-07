#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) freq[num]++;

        vector<pair<int, int>> items(freq.begin(), freq.end());
        sort(items.begin(), items.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(items[i].first);
        }
        return result;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    Solution sol;
    vector<int> result = sol.topKFrequent(nums, 2);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
