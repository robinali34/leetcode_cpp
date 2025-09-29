/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_palindrome_number.cpp
 * @desc : Test file for Palindrome Number
 */

#include <iostream>
#include <cassert>
#include "../../src/easy/palindrome_number/solution.h"
#include "../../src/easy/palindrome_number/solution.cpp"

void testPalindromeNumber() {
    PalindromeNumber::Solution solution;
    
    // Test case 1: 121 -> true
    int x1 = 121;
    bool result1 = solution.isPalindrome(x1);
    assert(result1 == true);
    std::cout << "Test 1 PASSED: 121 -> " << (result1 ? "true" : "false") << std::endl;
    
    // Test case 2: -121 -> false
    int x2 = -121;
    bool result2 = solution.isPalindrome(x2);
    assert(result2 == false);
    std::cout << "Test 2 PASSED: -121 -> " << (result2 ? "true" : "false") << std::endl;
    
    // Test case 3: 10 -> false
    int x3 = 10;
    bool result3 = solution.isPalindrome(x3);
    assert(result3 == false);
    std::cout << "Test 3 PASSED: 10 -> " << (result3 ? "true" : "false") << std::endl;
}

int main() {
    try {
        testPalindromeNumber();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
