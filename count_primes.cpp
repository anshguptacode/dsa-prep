/*
 * Problem: Count Primes (LeetCode #204)
 * Description: Count the number of prime numbers less than a given non-negative integer n.
 * Approach: Sieve of Eratosthenes - mark multiples of each prime as non-prime
 * Time Complexity: O(n log log n) - efficient prime sieving
 * Space Complexity: O(n) - boolean array
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) count++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    cout << sol.countPrimes(20) << endl;
    return 0;
}
