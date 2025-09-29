/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_valid_palindrome_ii.cpp
 * @desc : Test file for Valid Palindrome II
 */

#include <iostream>
#include <string>
#include <cassert>
#include "../../src/easy/valid_palindrome_ii/solution.h"
#include "../../src/easy/valid_palindrome_ii/solution.cpp"

void testValidPalindromeII() {
    ValidPalindromeII::Solution solution;
    
    // Test case 1: "aba" -> true
    string s1 = "aba";
    bool result1 = solution.validPalindrome(s1);
    assert(result1 == true);
    std::cout << "Test 1 PASSED: \"aba\" -> " << (result1 ? "true" : "false") << std::endl;
    
    // Test case 2: "abca" -> true
    string s2 = "abca";
    bool result2 = solution.validPalindrome(s2);
    assert(result2 == true);
    std::cout << "Test 2 PASSED: \"abca\" -> " << (result2 ? "true" : "false") << std::endl;
    
    // Test case 3: "abc" -> false
    string s3 = "abc";
    bool result3 = solution.validPalindrome(s3);
    assert(result3 == false);
    std::cout << "Test 3 PASSED: \"abc\" -> " << (result3 ? "true" : "false") << std::endl;
}

int main() {
    try {
        testValidPalindromeII();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
