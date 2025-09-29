/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_strobogrammatic_number.cpp
 * @desc : Test file for Strobogrammatic Number
 */

#include <iostream>
#include <string>
#include <cassert>
#include "../../src/easy/strobogrammatic_number/solution.h"
#include "../../src/easy/strobogrammatic_number/solution.cpp"

void testStrobogrammaticNumber() {
    StrobogrammaticNumber::Solution solution;
    
    // Test case 1: "69" -> true
    string num1 = "69";
    bool result1 = solution.isStrobogrammatic(num1);
    assert(result1 == true);
    std::cout << "Test 1 PASSED: \"69\" -> " << (result1 ? "true" : "false") << std::endl;
    
    // Test case 2: "88" -> true
    string num2 = "88";
    bool result2 = solution.isStrobogrammatic(num2);
    assert(result2 == true);
    std::cout << "Test 2 PASSED: \"88\" -> " << (result2 ? "true" : "false") << std::endl;
    
    // Test case 3: "962" -> false
    string num3 = "962";
    bool result3 = solution.isStrobogrammatic(num3);
    assert(result3 == false);
    std::cout << "Test 3 PASSED: \"962\" -> " << (result3 ? "true" : "false") << std::endl;
}

int main() {
    try {
        testStrobogrammaticNumber();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
