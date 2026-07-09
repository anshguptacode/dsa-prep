/*
 * Problem: Valid Parentheses (LeetCode #20)
 * Description: Given a string containing parentheses, determine if it is valid.
 *              Valid means every opening bracket has a corresponding closing bracket
 *              in the correct order.
 * Approach: Use a stack to match opening and closing parentheses
 * Time Complexity: O(n) - single pass through string
 * Space Complexity: O(n) - stack storage for unmatched brackets
 */

#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false;

                char top = st.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main() {
    Solution sol;
    string input;

    cout << "Enter a parenthesis string: ";
    cin >> input;

    if (sol.isValid(input)) {
        cout << "Valid parentheses" << endl;
    } else {
        cout << "Invalid parentheses" << endl;
    }

    return 0;
}
