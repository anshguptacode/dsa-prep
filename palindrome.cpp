#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int original = x;
        long long reverse = 0;

        while (x > 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x /= 10;
        }

        return original == reverse;
    }
};

int main() {
    Solution sol;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (sol.isPalindrome(num))
        cout << num << " is a Palindrome." << endl;
    else
        cout << num << " is NOT a Palindrome." << endl;

    return 0;
}