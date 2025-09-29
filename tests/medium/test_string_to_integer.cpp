/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_string_to_integer.cpp
 * @desc : Test file for String to Integer (atoi)
 */

#include <iostream>
#include <string>
#include <cassert>
#include "../../src/medium/string_to_integer/solution.h"
#include "../../src/medium/string_to_integer/solution.cpp"

void testStringToInteger() {
    StringToInteger::Solution solution;
    
    // Test case 1: s = "42" -> 42
    string s1 = "42";
    int result1 = solution.myAtoi(s1);
    assert(result1 == 42);
    std::cout << "Test 1 PASSED: \"42\" -> " << result1 << std::endl;
    
    // Test case 2: s = "   -42" -> -42
    string s2 = "   -42";
    int result2 = solution.myAtoi(s2);
    assert(result2 == -42);
    std::cout << "Test 2 PASSED: \"   -42\" -> " << result2 << std::endl;
    
    // Test case 3: s = "4193 with words" -> 4193
    string s3 = "4193 with words";
    int result3 = solution.myAtoi(s3);
    assert(result3 == 4193);
    std::cout << "Test 3 PASSED: \"4193 with words\" -> " << result3 << std::endl;
}

int main() {
    try {
        testStringToInteger();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
