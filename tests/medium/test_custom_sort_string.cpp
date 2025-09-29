/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_custom_sort_string.cpp
 * @desc : Test file for Custom Sort String
 */

#include <iostream>
#include <string>
#include <cassert>
#include "../../src/medium/custom_sort_string/solution.h"
#include "../../src/medium/custom_sort_string/solution.cpp"

void testCustomSortString() {
    CustomSortString::Solution solution;
    
    // Test case 1: order = "cba", s = "abcd" -> "cbad"
    string order1 = "cba";
    string s1 = "abcd";
    string result1 = solution.customSortString(order1, s1);
    assert(result1 == "cbad");
    std::cout << "Test 1 PASSED: order=\"cba\", s=\"abcd\" -> \"" << result1 << "\"" << std::endl;
    
    // Test case 2: order = "bcafg", s = "abcd" -> "bcad"
    string order2 = "bcafg";
    string s2 = "abcd";
    string result2 = solution.customSortString(order2, s2);
    assert(result2 == "bcad");
    std::cout << "Test 2 PASSED: order=\"bcafg\", s=\"abcd\" -> \"" << result2 << "\"" << std::endl;
}

int main() {
    try {
        testCustomSortString();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
