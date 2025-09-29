/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_integer_to_roman.cpp
 * @desc : Test file for Integer to Roman
 */

#include <iostream>
#include <string>
#include <cassert>
#include "../../src/medium/integer_to_roman/solution.h"
#include "../../src/medium/integer_to_roman/solution.cpp"

void testIntegerToRoman() {
    IntegerToRoman::Solution solution;
    
    // Test case 1: num = 3 -> "III"
    int num1 = 3;
    string result1 = solution.intToRoman(num1);
    assert(result1 == "III");
    std::cout << "Test 1 PASSED: 3 -> \"" << result1 << "\"" << std::endl;
    
    // Test case 2: num = 58 -> "LVIII"
    int num2 = 58;
    string result2 = solution.intToRoman(num2);
    assert(result2 == "LVIII");
    std::cout << "Test 2 PASSED: 58 -> \"" << result2 << "\"" << std::endl;
    
    // Test case 3: num = 1994 -> "MCMXCIV"
    int num3 = 1994;
    string result3 = solution.intToRoman(num3);
    assert(result3 == "MCMXCIV");
    std::cout << "Test 3 PASSED: 1994 -> \"" << result3 << "\"" << std::endl;
}

int main() {
    try {
        testIntegerToRoman();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
