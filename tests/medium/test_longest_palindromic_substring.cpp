/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_longest_palindromic_substring.cpp
 * @desc : Test file for Longest Palindromic Substring
 */

#include <iostream>
#include <string>
#include <cassert>
#include "../../src/medium/longest_palindromic_substring/solution.h"
#include "../../src/medium/longest_palindromic_substring/solution.cpp"

void testLongestPalindromicSubstring() {
    LongestPalindromicSubstring::Solution solution;
    
    // Test case 1: s = "babad" -> "bab" or "aba"
    string s1 = "babad";
    string result1 = solution.longestPalindrome(s1);
    assert(result1 == "bab" || result1 == "aba");
    std::cout << "Test 1 PASSED: \"babad\" -> \"" << result1 << "\"" << std::endl;
    
    // Test case 2: s = "cbbd" -> "bb"
    string s2 = "cbbd";
    string result2 = solution.longestPalindrome(s2);
    assert(result2 == "bb");
    std::cout << "Test 2 PASSED: \"cbbd\" -> \"" << result2 << "\"" << std::endl;
    
    // Test case 3: s = "a" -> "a"
    string s3 = "a";
    string result3 = solution.longestPalindrome(s3);
    assert(result3 == "a");
    std::cout << "Test 3 PASSED: \"a\" -> \"" << result3 << "\"" << std::endl;
}

int main() {
    try {
        testLongestPalindromicSubstring();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
