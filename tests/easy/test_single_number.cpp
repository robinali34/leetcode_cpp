/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_single_number.cpp
 * @desc : Test file for Single Number
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/easy/single_number/solution.h"
#include "../../src/easy/single_number/solution.cpp"

void testSingleNumber() {
    SingleNumber::Solution solution;
    
    // Test case 1: [2,2,1] -> 1
    vector<int> nums1 = {2, 2, 1};
    int result1 = solution.singleNumber(nums1);
    assert(result1 == 1);
    std::cout << "Test 1 PASSED: [2,2,1] -> " << result1 << std::endl;
    
    // Test case 2: [4,1,2,1,2] -> 4
    vector<int> nums2 = {4, 1, 2, 1, 2};
    int result2 = solution.singleNumber(nums2);
    assert(result2 == 4);
    std::cout << "Test 2 PASSED: [4,1,2,1,2] -> " << result2 << std::endl;
    
    // Test case 3: [1] -> 1
    vector<int> nums3 = {1};
    int result3 = solution.singleNumber(nums3);
    assert(result3 == 1);
    std::cout << "Test 3 PASSED: [1] -> " << result3 << std::endl;
}

int main() {
    try {
        testSingleNumber();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
