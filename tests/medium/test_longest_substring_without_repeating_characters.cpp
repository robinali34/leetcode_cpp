/*
 * Copyright 2021 Robina Li. MIT License
 * @file : test_longest_substring_without_repeating_characters.cpp
 * @desc : Test file for Longest Substring Without Repeating Characters
 */

#include <iostream>
#include <string>
#include <cassert>
#include "../../src/medium/longest_substring_without_repeating_characters/solution.h"
#include "../../src/medium/longest_substring_without_repeating_characters/solution.cpp"

void testLengthOfLongestSubstring() {
    LongestSubstringWithoutRepeatingCharacters::Solution solution;
    
    // Test case 1: "abcabcbb"
    std::string s1 = "abcabcbb";
    int result1 = solution.lengthOfLongestSubstring(s1);
    assert(result1 == 3);
    std::cout << "Test 1 PASSED: \"abcabcbb\" -> " << result1 << std::endl;
    
    // Test case 2: "bbbbb"
    std::string s2 = "bbbbb";
    int result2 = solution.lengthOfLongestSubstring(s2);
    assert(result2 == 1);
    std::cout << "Test 2 PASSED: \"bbbbb\" -> " << result2 << std::endl;
    
    // Test case 3: "pwwkew"
    std::string s3 = "pwwkew";
    int result3 = solution.lengthOfLongestSubstring(s3);
    assert(result3 == 3);
    std::cout << "Test 3 PASSED: \"pwwkew\" -> " << result3 << std::endl;
    
    // Test case 4: ""
    std::string s4 = "";
    int result4 = solution.lengthOfLongestSubstring(s4);
    assert(result4 == 0);
    std::cout << "Test 4 PASSED: \"\" -> " << result4 << std::endl;
    
    // Test case 5: "aab"
    std::string s5 = "aab";
    int result5 = solution.lengthOfLongestSubstring(s5);
    assert(result5 == 2);
    std::cout << "Test 5 PASSED: \"aab\" -> " << result5 << std::endl;
}

int main() {
    try {
        testLengthOfLongestSubstring();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
