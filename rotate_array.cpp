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
