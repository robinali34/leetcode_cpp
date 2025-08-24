# LeetCode Solutions in C++

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/C%2B%2B-17-blue.svg)](https://isocpp.org/std/the-standard)
[![Build Status](https://img.shields.io/badge/Build-Passing-brightgreen.svg)](https://github.com/robinali34/leetcode_c_cplusplus)

This repository contains my solutions to LeetCode problems implemented in C++. The project is designed with a clean, modular architecture that makes it easy to add new solutions and maintain existing code.

## 📊 Google Top Questions

|      | [Google top questions]                                           |Difficulty|Wiki                |Solution                 |
| ---- | ---------------------------------------------------------------- | -------- |------------------- |-------------------------|
| 1    | [Two Sum]                                                        |   [Easy]  |                    |[Two Sum Solution] |
| 3    | [Longest Substring Without Repeating Characters]                 |  [Medium] |                    |[Longest Substring Without Repeating Characters Solution] |
| 26   | [Remove Duplicates from Sorted Array]              |   [Easy]  |                    |[Remove Duplicates from Sorted Array Solution] |
| 53   | [Maximum Subarray]                                               |  [Medium] |                    |[Maximum Subarray Solution] |
| 56   | [Merge Intervals]                                                |  [Medium] |                    |[Merge Intervals Solution] |
| 57   | [Insert Interval]                                                |  [Medium] |                    |[Insert Interval Solution] |
| 121  | [Best Time to Buy and Sell Stock]                |   [Easy]  |                    |[Best Time to Buy and Sell Stock Solution] |
| 122  | [Best Time to Buy and Sell Stock II]              |   [Easy]  |                    |[Best Time to Buy and Sell Stock II Solution] |
| 152  | [Maximum Product Subarray]                                       |  [Medium] |                    |[Maximum Product Subarray Solution] |
| 189  | [Rotate Array]                                    |  [Medium] |                    |[Rotate Array Solution] |
| 238  | [Product of Array Except Self]                                   |  [Medium] |                    |[Product of Array Except Self Solution] |
| 242  | [Valid Anagram]                                                  |   [Easy]  |                    |[Valid Anagram Solution] |
| 435  | [Non-overlapping Intervals]                                      |  [Medium] |                    |[Non-overlapping Intervals Solution] |

[Two Sum]: https://leetcode.com/problems/two-sum/
[Two Sum Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/easy/two_sum/solution.cpp
[Longest Substring Without Repeating Characters]: https://leetcode.com/problems/longest-substring-without-repeating-characters/
[Longest Substring Without Repeating Characters Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/longest_substring_without_repeating_characters/solution.cpp
[Remove Duplicates from Sorted Array]: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
[Remove Duplicates from Sorted Array Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/easy/remove_duplicates_from_sorted_array/solution.cpp
[Maximum Subarray]: https://leetcode.com/problems/maximum-subarray/
[Maximum Subarray Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/maximum_subarray/solution.cpp
[Merge Intervals]: https://leetcode.com/problems/merge-intervals/
[Merge Intervals Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/merge_intervals/solution.cpp
[Insert Interval]: https://leetcode.com/problems/insert-interval/
[Insert Interval Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/insert_interval/solution.cpp
[Best Time to Buy and Sell Stock]: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
[Best Time to Buy and Sell Stock Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/easy/best_time_to_buy_and_sell_stock/solution.cpp
[Best Time to Buy and Sell Stock II]: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
[Best Time to Buy and Sell Stock II Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/easy/best_time_to_buy_and_sell_stock_ii/solution.cpp
[Maximum Product Subarray]: https://leetcode.com/problems/maximum-product-subarray/
[Maximum Product Subarray Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/maximum_product_subarray/solution.cpp
[Rotate Array]: https://leetcode.com/problems/rotate-array/
[Rotate Array Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/rotate_array/solution.cpp
[Product of Array Except Self]: https://leetcode.com/problems/product-of-array-except-self/
[Product of Array Except Self Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/product_of_array_except_self/solution.cpp
[Valid Anagram]: https://leetcode.com/problems/valid-anagram/
[Valid Anagram Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/easy/valid_anagram/solution.cpp
[Non-overlapping Intervals]: https://leetcode.com/problems/non-overlapping-intervals/
[Non-overlapping Intervals Solution]: https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/non_overlapping_intervals/solution.cpp
[Easy]: https://github.com/robinali34/leetcode_c_cplusplus/tree/master/src/easy
[Medium]: https://github.com/robinali34/leetcode_c_cplusplus/tree/master/src/medium

## 🚀 Features

- **Modern C++17** with best practices
- **Modular design** with separate header and implementation files
- **Namespace isolation** to prevent naming conflicts
- **Comprehensive testing** for all solutions
- **Multiple build systems** (Makefile and CMake)
- **Easy to extend** with new problems
- **Cross-platform** compatibility

## 📁 Project Structure

```
leetcode_cpp/
├── src/                                    # Source code directory
│   ├── easy/                              # Easy difficulty problems
│   │   ├── two_sum/
│   │   │   ├── solution.h                 # Header file
│   │   │   └── solution.cpp               # Implementation
│   │   ├── best_time_to_buy_and_sell_stock/
│   │   │   ├── solution.h
│   │   │   └── solution.cpp
│   │   ├── best_time_to_buy_and_sell_stock_ii/
│   │   │   ├── solution.h
│   │   │   └── solution.cpp
│   │   ├── remove_duplicates_from_sorted_array/
│   │   │   ├── solution.h
│   │   │   └── solution.cpp
│   │   └── valid_anagram/
│   │       ├── solution.h
│   │       └── solution.cpp
│   ├── medium/                            # Medium difficulty problems
│   │   ├── longest_substring_without_repeating_characters/
│   │   │   ├── solution.h
│   │   │   └── solution.cpp
│   │   ├── maximum_subarray/
│   │   │   ├── solution.h
│   │   │   └── solution.cpp
│   │   ├── product_of_array_except_self/
│   │   │   ├── solution.h
│   │   │   └── solution.cpp
│   │   ├── maximum_product_subarray/
│   │   │   ├── solution.h
│   │   │   └── solution.cpp
│   │   ├── rotate_array/
│   │   │   ├── solution.h
│   │   │   └── solution.cpp
│   │   ├── merge_intervals/
│   │   │   ├── solution.h
│   │   │   └── solution.cpp
│   │   ├── insert_interval/
│   │   │   ├── solution.h
│   │   │   └── solution.cpp
│   │   └── non_overlapping_intervals/
│   │       ├── solution.h
│   │       └── solution.cpp
│   └── main.cpp                           # Main executable
├── tests/                                 # Test files
│   ├── easy/
│   │   ├── test_two_sum.cpp
│   │   ├── test_best_time_to_buy_and_sell_stock.cpp
│   │   ├── test_best_time_to_buy_and_sell_stock_ii.cpp
│   │   ├── test_remove_duplicates_from_sorted_array.cpp
│   │   └── test_valid_anagram.cpp
│   └── medium/
│       ├── test_longest_substring_without_repeating_characters.cpp
│       ├── test_maximum_subarray.cpp
│       ├── test_product_of_array_except_self.cpp
│       ├── test_maximum_product_subarray.cpp
│       ├── test_rotate_array.cpp
│       ├── test_merge_intervals.cpp
│       ├── test_insert_interval.cpp
│       └── test_non_overlapping_intervals.cpp
├── build/                                 # Build output (generated)
├── CMakeLists.txt                         # CMake configuration
├── Makefile                               # Make build system
├── build.sh                               # Convenient build script
├── README.md                              # This file
└── LICENSE                                # MIT License
```

## 🛠️ Prerequisites

### Required Software
- **C++ Compiler**: GCC 7+ or Clang 5+ (C++17 support required)
- **Make**: GNU Make 3.81+
- **CMake**: 3.10+ (optional, for CMake builds)

### System Requirements
- **Linux**: Ubuntu 18.04+, CentOS 7+, or similar
- **macOS**: 10.14+ with Xcode Command Line Tools
- **Windows**: Windows 10+ with MinGW-w64 or Visual Studio 2017+

## 📦 Installation

### 1. Clone the Repository
```bash
git clone git@github.com:robinali34/leetcode_c_cplusplus.git
cd leetcode_c_cplusplus
```

### 2. Install Dependencies

#### Ubuntu/Debian
```bash
sudo apt update
sudo apt install build-essential cmake
```

#### CentOS/RHEL/Fedora
```bash
sudo yum groupinstall "Development Tools"
sudo yum install cmake
# or for newer versions:
sudo dnf groupinstall "Development Tools"
sudo dnf install cmake
```

#### macOS
```bash
# Install Xcode Command Line Tools
xcode-select --install

# Install CMake via Homebrew (optional)
brew install cmake
```

#### Windows
```bash
# Using Chocolatey
choco install mingw make cmake

# Using Scoop
scoop install gcc make cmake
```

## 🔨 Building the Project

### Option 1: Using Makefile (Recommended)

#### Build Everything
```bash
make all
```

#### Build Main Executable Only
```bash
make leetcode_cpp
```

#### Build Tests Only
```bash
make run_tests
```

#### Run Tests
```bash
make test
```

#### Clean Build Files
```bash
make clean
```

#### Show Available Targets
```bash
make help
```

### Option 2: Using CMake

#### Create Build Directory
```bash
mkdir build
cd build
```

#### Configure and Build
```bash
cmake ..
make
```

#### Run Tests
```bash
make test
```

### Option 3: Using Build Script (Easiest)
```bash
./build.sh
```

This script will:
1. Clean previous builds
2. Build the entire project
3. Run the main executable
4. Run all tests

## 🚀 Running the Project

### Main Executable
```bash
./build/bin/leetcode_cpp
```

This will run demonstrations of all implemented solutions with sample test cases.

### Individual Tests
```bash
./build/bin/run_tests
```

This will run all test cases and report results.

## 📚 Adding New Solutions

### 1. Create Directory Structure
```bash
mkdir -p src/easy/your_problem_name
mkdir -p tests/easy
```

### 2. Create Header File
Create `src/easy/your_problem_name/solution.h`:
```cpp
/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Your Problem Name
 * Reference : https://leetcode.com/problems/your-problem-url/
 */

#ifndef YOUR_PROBLEM_NAME_SOLUTION_H
#define YOUR_PROBLEM_NAME_SOLUTION_H

#include <vector>

namespace YourProblemName {
class Solution {
public:
    // Declare your methods here
    int yourMethod(std::vector<int>& nums);
};
}

#endif // YOUR_PROBLEM_NAME_SOLUTION_H
```

### 3. Create Implementation File
Create `src/easy/your_problem_name/solution.cpp`:
```cpp
/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Your Problem Name
 * Reference : https://leetcode.com/problems/your-problem-url/
 */

#include "solution.h"

namespace YourProblemName {

int Solution::yourMethod(std::vector<int>& nums) {
    // Your implementation here
    return 0;
}

}
```

### 4. Create Test File
Create `tests/easy/test_your_problem_name.cpp`:
```cpp
/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_your_problem_name.cpp
 * @desc : Test file for Your Problem Name
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/easy/your_problem_name/solution.h"
#include "../../src/easy/your_problem_name/solution.cpp"

void testYourMethod() {
    YourProblemName::Solution solution;
    
    // Test case 1
    std::vector<int> nums1 = {1, 2, 3};
    int result1 = solution.yourMethod(nums1);
    assert(result1 == expected_value);
    std::cout << "Test 1 PASSED" << std::endl;
}

int main() {
    try {
        testYourMethod();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
```

### 5. Update Main Executable
Add your solution to `src/main.cpp`:
```cpp
#include "easy/your_problem_name/solution.h"

void testYourProblem() {
    std::cout << "\n=== Testing Your Problem Name ===" << std::endl;
    YourProblemName::Solution solution;
    
    // Add your test cases here
}
```

### 6. Rebuild
```bash
make clean && make all
```

## 🧪 Testing

### Running All Tests
```bash
make test
```

### Running Individual Test Files
```bash
# Compile specific test
g++ -std=c++17 -I src tests/easy/test_your_problem.cpp -o test_your_problem

# Run test
./test_your_problem
```

### Adding Test Cases
1. **Edge Cases**: Empty arrays, single elements, maximum values
2. **Normal Cases**: Typical input scenarios
3. **Boundary Cases**: Values at the limits of constraints
4. **Performance Cases**: Large inputs for time complexity validation

## 🔧 Configuration

### Compiler Flags
The project uses the following compiler flags:
- `-std=c++17`: C++17 standard
- `-Wall -Wextra`: Enable all warnings
- `-g`: Include debug information

### Customizing Build
You can modify the `Makefile` or `CMakeLists.txt` to:
- Change compiler flags
- Add new source directories
- Modify output directories
- Add external libraries

## 📊 Current Solutions

See the [Google Top Questions](#-google-top-questions) table above for a complete list of implemented solutions with direct links to both the LeetCode problems and the C++ solutions in this repository.

### Easy Problems
- [Two Sum](https://leetcode.com/problems/two-sum/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/easy/two_sum/solution.cpp)
- [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/easy/best_time_to_buy_and_sell_stock/solution.cpp)
- [Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/easy/best_time_to_buy_and_sell_stock_ii/solution.cpp)
- [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/easy/remove_duplicates_from_sorted_array/solution.cpp)
- [Valid Anagram](https://leetcode.com/problems/valid-anagram/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/easy/valid_anagram/solution.cpp)

### Medium Problems
- [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/longest_substring_without_repeating_characters/solution.cpp)
- [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/maximum_subarray/solution.cpp)
- [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/product_of_array_except_self/solution.cpp)
- [Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/maximum_product_subarray/solution.cpp)
- [Rotate Array](https://leetcode.com/problems/rotate-array/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/rotate_array/solution.cpp)
- [Merge Intervals](https://leetcode.com/problems/merge-intervals/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/merge_intervals/solution.cpp)
- [Insert Interval](https://leetcode.com/problems/insert-interval/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/insert_interval/solution.cpp)
- [Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/) - [Solution](https://github.com/robinali34/leetcode_c_cplusplus/blob/main/src/medium/non_overlapping_intervals/solution.cpp)

## 🤝 Contributing

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/amazing-feature`)
3. **Commit** your changes (`git commit -m 'Add amazing feature'`)
4. **Push** to the branch (`git push origin feature/amazing-feature`)
5. **Open** a Pull Request

### Contribution Guidelines
- Follow the existing code style and structure
- Add comprehensive tests for new solutions
- Update documentation as needed
- Ensure all tests pass before submitting

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- [LeetCode](https://leetcode.com/) for providing the problem set
- The C++ community for best practices and standards
- Contributors and reviewers

## 📞 Contact

- **GitHub**: [@robinali34](https://github.com/robinali34)
- **Repository**: [leetcode_c_cplusplus](https://github.com/robinali34/leetcode_c_cplusplus)

## 🔄 Changelog

### Version 2.0.0 (Current)
- Added 10 new LeetCode solutions
- Two Sum (1) - Easy
- Best Time to Buy and Sell Stock (121) - Easy
- Maximum Subarray (53) - Medium
- Product of Array Except Self (238) - Medium
- Maximum Product Subarray (152) - Medium
- Merge Intervals (56) - Medium
- Insert Interval (57) - Medium
- Non-overlapping Intervals (435) - Medium
- Valid Anagram (242) - Easy
- Longest Substring Without Repeating Characters (3) - Medium
- Complete build system with Makefile and CMake
- Comprehensive testing framework
- MIT License

### Version 1.0.0
- Initial project setup
- Three LeetCode solutions implemented
- Complete build system with Makefile and CMake
- Comprehensive testing framework
- MIT License

---

**Happy Coding! 🚀**