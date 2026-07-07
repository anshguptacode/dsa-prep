#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }
        return candidate;
    }
};

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    Solution sol;
    cout << sol.majorityElement(nums) << endl;
    return 0;
}
