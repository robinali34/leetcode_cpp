/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_unique_paths.cpp
 * @desc : Test file for Unique Paths
 */

#include <iostream>
#include <cassert>
#include "../../src/medium/unique_paths/solution.h"
#include "../../src/medium/unique_paths/solution.cpp"

void testUniquePaths() {
    UniquePaths::Solution solution;
    
    // Test case 1: m = 3, n = 7 -> 28
    int result1 = solution.uniquePaths(3, 7);
    assert(result1 == 28);
    std::cout << "Test 1 PASSED: m=3, n=7 -> " << result1 << std::endl;
    
    // Test case 2: m = 3, n = 2 -> 3
    int result2 = solution.uniquePaths(3, 2);
    assert(result2 == 3);
    std::cout << "Test 2 PASSED: m=3, n=2 -> " << result2 << std::endl;
    
    // Test case 3: m = 7, n = 3 -> 28
    int result3 = solution.uniquePaths(7, 3);
    assert(result3 == 28);
    std::cout << "Test 3 PASSED: m=7, n=3 -> " << result3 << std::endl;
}

int main() {
    try {
        testUniquePaths();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
