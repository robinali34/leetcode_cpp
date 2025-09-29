/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_zigzag_conversion.cpp
 * @desc : Test file for Zigzag Conversion
 */

#include <iostream>
#include <string>
#include <cassert>
#include "../../src/medium/zigzag_conversion/solution.h"
#include "../../src/medium/zigzag_conversion/solution.cpp"

void testZigzagConversion() {
    ZigzagConversion::Solution solution;
    
    // Test case 1: s = "PAYPALISHIRING", numRows = 3 -> "PAHNAPLSIIGYIR"
    string s1 = "PAYPALISHIRING";
    int numRows1 = 3;
    string result1 = solution.convert(s1, numRows1);
    assert(result1 == "PAHNAPLSIIGYIR");
    std::cout << "Test 1 PASSED: \"PAYPALISHIRING\", numRows=3 -> \"" << result1 << "\"" << std::endl;
    
    // Test case 2: s = "PAYPALISHIRING", numRows = 4 -> "PINALSIGYAHRPI"
    string s2 = "PAYPALISHIRING";
    int numRows2 = 4;
    string result2 = solution.convert(s2, numRows2);
    assert(result2 == "PINALSIGYAHRPI");
    std::cout << "Test 2 PASSED: \"PAYPALISHIRING\", numRows=4 -> \"" << result2 << "\"" << std::endl;
    
    // Test case 3: s = "A", numRows = 1 -> "A"
    string s3 = "A";
    int numRows3 = 1;
    string result3 = solution.convert(s3, numRows3);
    assert(result3 == "A");
    std::cout << "Test 3 PASSED: \"A\", numRows=1 -> \"" << result3 << "\"" << std::endl;
}

int main() {
    try {
        testZigzagConversion();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
