/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_product_of_array_except_self.cpp
 * @desc : Test file for Product of Array Except Self
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/product_of_array_except_self/solution.h"
#include "../../src/medium/product_of_array_except_self/solution.cpp"

void testProductExceptSelf() {
    ProductOfArrayExceptSelf::Solution solution;
    
    // Test case 1: [1,2,3,4]
    std::vector<int> nums1 = {1, 2, 3, 4};
    std::vector<int> result1 = solution.productExceptSelf(nums1);
    std::vector<int> expected1 = {24, 12, 8, 6};
    assert(result1 == expected1);
    std::cout << "Test 1 PASSED: [1,2,3,4] -> [24,12,8,6]" << std::endl;
    
    // Test case 2: [-1,1,0,-3,3]
    std::vector<int> nums2 = {-1, 1, 0, -3, 3};
    std::vector<int> result2 = solution.productExceptSelf(nums2);
    std::vector<int> expected2 = {0, 0, 9, 0, 0};
    assert(result2 == expected2);
    std::cout << "Test 2 PASSED: [-1,1,0,-3,3] -> [0,0,9,0,0]" << std::endl;
    
    // Test case 3: [2,3,4,5]
    std::vector<int> nums3 = {2, 3, 4, 5};
    std::vector<int> result3 = solution.productExceptSelf(nums3);
    std::vector<int> expected3 = {60, 40, 30, 24};
    assert(result3 == expected3);
    std::cout << "Test 3 PASSED: [2,3,4,5] -> [60,40,30,24]" << std::endl;
}

int main() {
    try {
        testProductExceptSelf();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
