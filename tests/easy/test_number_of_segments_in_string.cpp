/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_number_of_segments_in_string.cpp
 * @desc : Test file for Number of Segments in a String
 */

#include <iostream>
#include <string>
#include <cassert>
#include "../../src/easy/number_of_segments_in_string/solution.h"
#include "../../src/easy/number_of_segments_in_string/solution.cpp"

void testNumberOfSegmentsInString() {
    NumberOfSegmentsInString::Solution solution;
    
    // Test case 1: s = "Hello, my name is John" -> 5
    string s1 = "Hello, my name is John";
    int result1 = solution.countSegments(s1);
    assert(result1 == 5);
    std::cout << "Test 1 PASSED: \"Hello, my name is John\" -> " << result1 << std::endl;
    
    // Test case 2: s = "Hello" -> 1
    string s2 = "Hello";
    int result2 = solution.countSegments(s2);
    assert(result2 == 1);
    std::cout << "Test 2 PASSED: \"Hello\" -> " << result2 << std::endl;
    
    // Test case 3: s = "love live! mu'sic forever" -> 4
    string s3 = "love live! mu'sic forever";
    int result3 = solution.countSegments(s3);
    assert(result3 == 4);
    std::cout << "Test 3 PASSED: \"love live! mu'sic forever\" -> " << result3 << std::endl;
}

int main() {
    try {
        testNumberOfSegmentsInString();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
