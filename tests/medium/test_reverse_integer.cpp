/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_reverse_integer.cpp
 * @desc : Test file for Reverse Integer
 */

#include <iostream>
#include <cassert>
#include "../../src/medium/reverse_integer/solution.h"
#include "../../src/medium/reverse_integer/solution.cpp"

void testReverseInteger() {
    ReverseInteger::Solution solution;
    
    // Test case 1: x = 123 -> 321
    int x1 = 123;
    int result1 = solution.reverse(x1);
    assert(result1 == 321);
    std::cout << "Test 1 PASSED: 123 -> " << result1 << std::endl;
    
    // Test case 2: x = -123 -> -321
    int x2 = -123;
    int result2 = solution.reverse(x2);
    assert(result2 == -321);
    std::cout << "Test 2 PASSED: -123 -> " << result2 << std::endl;
    
    // Test case 3: x = 120 -> 21
    int x3 = 120;
    int result3 = solution.reverse(x3);
    assert(result3 == 21);
    std::cout << "Test 3 PASSED: 120 -> " << result3 << std::endl;
}

int main() {
    try {
        testReverseInteger();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
