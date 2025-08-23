/*
 * Copyright 2021 Robina Li. MIT License
 * @file : test_maximum_product_subarray.cpp
 * @desc : Test file for Maximum Product Subarray
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/maximum_product_subarray/solution.h"
#include "../../src/medium/maximum_product_subarray/solution.cpp"

void testMaxProduct() {
    MaximumProductSubarray::Solution solution;
    
    // Test case 1: [2,3,-2,4]
    std::vector<int> nums1 = {2, 3, -2, 4};
    int result1 = solution.maxProduct(nums1);
    assert(result1 == 6);
    std::cout << "Test 1 PASSED: [2,3,-2,4] -> " << result1 << std::endl;
    
    // Test case 2: [-2,0,-1]
    std::vector<int> nums2 = {-2, 0, -1};
    int result2 = solution.maxProduct(nums2);
    assert(result2 == 0);
    std::cout << "Test 2 PASSED: [-2,0,-1] -> " << result2 << std::endl;
    
    // Test case 3: [3,-1,4]
    std::vector<int> nums3 = {3, -1, 4};
    int result3 = solution.maxProduct(nums3);
    assert(result3 == 4);
    std::cout << "Test 3 PASSED: [3,-1,4] -> " << result3 << std::endl;
    
    // Test case 4: [-2,3,-4]
    std::vector<int> nums4 = {-2, 3, -4};
    int result4 = solution.maxProduct(nums4);
    assert(result4 == 24);
    std::cout << "Test 4 PASSED: [-2,3,-4] -> " << result4 << std::endl;
}

int main() {
    try {
        testMaxProduct();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
