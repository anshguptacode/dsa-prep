#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // negative numbers are not palindromes
        if (x < 0) return false;
        // numbers ending with 0 (but not 0 itself) are not palindromes
        if (x % 10 == 0 && x != 0) return false;

        int rev = 0;
        // reverse only half of the number to avoid overflow
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        // For odd number of digits, discard the middle digit before comparison
        return (x == rev) || (x == rev / 10);
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