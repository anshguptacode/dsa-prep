# Data Structures & Algorithms Repository

A comprehensive collection of classic LeetCode problems and algorithmic solutions implemented in C++. This repository serves as a DSA (Data Structures and Algorithms) preparation resource with optimized solutions and detailed complexity analysis.

## 📋 Repository Overview

This repository contains implementations of 21+ fundamental DSA problems, each featuring:
- Optimized C++ solution classes or functions
- Time and space complexity analysis
- Example test cases
- Problem descriptions in code comments

---

## 🚀 Improvements Added

- Added `CMakeLists.txt` to build all `.cpp` files automatically.
- Added GitHub Actions CI in `.github/workflows/build.yml` to build on push and pull request.
- Ensured compiled binaries and editor files are ignored by `.gitignore`.

---

## 📚 Problems & Solutions

| # | Problem | File | Complexity | Algorithm |
|---|---------|------|-----------|-----------|
| 1 | Two Sum | [two_sum.cpp](two_sum.cpp) | O(n) Time / O(n) Space | Hash Map |
| 2 | Contains Duplicate | [contains_duplicate.cpp](contains_duplicate.cpp) | O(n) Time / O(n) Space | Hash Set |
| 3 | Valid Parentheses | [valid_parentheses.cpp](valid_parentheses.cpp) | O(n) Time / O(n) Space | Stack |
| 4 | Best Time to Buy Stock | [best_time_to_buy_stock.cpp](best_time_to_buy_stock.cpp) | O(n) Time / O(1) Space | Two Pointers |
| 5 | Merge Sorted Array | [merge_sorted_array.cpp](merge_sorted_array.cpp) | O(n+m) Time / O(1) Space | Two Pointers |
| 6 | Remove Duplicates | [remove_duplicates.cpp](remove_duplicates.cpp) | O(n) Time / O(1) Space | Two Pointers |
| 7 | Rotate Array | [rotate_array.cpp](rotate_array.cpp) | O(n) Time / O(1) Space | Reversal Algorithm |
| 8 | Single Number | [single_number.cpp](single_number.cpp) | O(n) Time / O(1) Space | Bit Manipulation |
| 9 | Plus One | [plus_one.cpp](plus_one.cpp) | O(n) Time / O(n) Space | Array Manipulation |
| 10 | Palindrome | [palindrome.cpp](palindrome.cpp) | O(n) Time / O(1) Space | Two Pointers |
| 11 | Majority Element | [majority_element.cpp](majority_element.cpp) | O(n) Time / O(1) Space | Boyer-Moore Voting |
| 12 | Top K Frequent Elements | [top_k_frequent.cpp](top_k_frequent.cpp) | O(n log k) Time / O(n) Space | Min Heap |
| 13 | Climb Stairs | [climb_stairs.cpp](climb_stairs.cpp) | O(n) Time / O(n) Space | Dynamic Programming |
| 14 | Max Subarray | [max_subarray.cpp](max_subarray.cpp) | O(n) Time / O(1) Space | Kadane's Algorithm |
| 15 | Count Primes | [count_primes.cpp](count_primes.cpp) | O(n log log n) Time / O(n) Space | Sieve of Eratosthenes |
| 16 | Longest Common Prefix | [longest_common_prefix.cpp](longest_common_prefix.cpp) | O(n*m) Time / O(1) Space | String Comparison |
| 17 | Group Anagrams | [group_anagrams.cpp](group_anagrams.cpp) | O(n*k log k) Time / O(n*k) Space | Hash Map + Sorting |
| 18 | Product of Array Except Self | [product_except_self.cpp](product_except_self.cpp) | O(n) Time / O(1) Space | Prefix/Suffix Product |
| 19 | Longest Palindromic Substring | [longest_palindromic_substring.cpp](longest_palindromic_substring.cpp) | O(n^2) Time / O(1) Space | Expand Around Center |
| 20 | Binary Search | [binary_search.cpp](binary_search.cpp) | O(log n) Time / O(1) Space | Binary Search |
| 21 | Two Sum - Alternative | [two_sum_alt.cpp](two_sum_alt.cpp) | O(n) Time / O(n) Space | Hash Map |

---

## 🚀 Quick Start

### Prerequisites
- GCC compiler or any C++ compiler
- C++11 or later

### Building & Running

#### Method 1: Compile and run directly
```bash
g++ -o rotate_array rotate_array.cpp
./rotate_array
```

#### Method 2: Using VS Code Build Task
- Open any `.cpp` file
- Press `Ctrl+Shift+B` to build using the configured build task
- Run the generated `.exe` file

### Example
```bash
# Compile two_sum.cpp
g++ -o two_sum two_sum.cpp

# Run the executable
./two_sum
# Output: 0 1
```

---

## 📊 Algorithm Categories

### Array Techniques
- Two Pointers Approach
- Sliding Window
- Prefix/Suffix Arrays
- Reversal Algorithm

### Searching & Sorting
- Binary Search
- Hash Maps & Sets
- Sorting Algorithms

### Dynamic Programming
- Fibonacci Problems
- Optimization Problems

### String Manipulation
- Pattern Matching
- Anagrams & Permutations

### Bit Manipulation
- XOR Operations
- Bit Masking

---

## 💡 Key Learnings

Each solution emphasizes:
1. **Optimal Time Complexity**: Most solutions are optimized to the best possible complexity
2. **Space Optimization**: Solutions minimize extra space usage where applicable
3. **Clean Code**: Easy-to-understand implementations with proper variable naming
4. **Complexity Analysis**: Clear documentation of time and space requirements

---

## 📈 Complexity Cheat Sheet

| Algorithm | Best | Average | Worst | Space |
|-----------|------|---------|-------|-------|
| Binary Search | O(1) | O(log n) | O(log n) | O(1) |
| Hash Map Lookup | O(1) | O(1) | O(n) | O(n) |
| Sorting (Optimal) | O(n log n) | O(n log n) | O(n log n) | O(n) |
| Sieve of Eratosthenes | - | O(n log log n) | - | O(n) |

---

## 📝 File Structure

All solutions are stored as root-level `.cpp` files in the repository root. The repository also includes `.gitignore`, `.vscode/`, and `README.md` for configuration and documentation.

---

## 🎯 How to Use This Repository

1. **Learning**: Read the problem descriptions in the code comments
2. **Practice**: Try solving each problem before viewing the solution
3. **Optimization**: Study the optimized approaches and complexity analysis
4. **Interview Prep**: Use these solutions to prepare for technical interviews

---

## 🤝 Contributing

This is a personal learning repository. Feel free to:
- Suggest optimizations
- Report bugs or issues
- Add alternative solutions
- Improve documentation

---

## 📄 License

This repository is open source and available for educational purposes.

---

## 📞 Notes

- All solutions use standard C++ libraries
- Most implementations include test cases in the `main()` function
- Complexity analysis is provided in comments within each file
- Solutions are optimized for performance and readability

**Happy Learning! 🚀**
