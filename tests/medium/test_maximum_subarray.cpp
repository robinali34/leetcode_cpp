/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_maximum_subarray.cpp
 * @desc : Test file for Maximum Subarray
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/maximum_subarray/solution.h"
#include "../../src/medium/maximum_subarray/solution.cpp"

void testMaxSubArray() {
    MaximumSubarray::Solution solution;
    
    // Test case 1: [-2,1,-3,4,-1,2,1,-5,4]
    std::vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result1 = solution.maxSubArray(nums1);
    assert(result1 == 6);
    std::cout << "Test 1 PASSED: [-2,1,-3,4,-1,2,1,-5,4] -> " << result1 << std::endl;
    
    // Test case 2: [1]
    std::vector<int> nums2 = {1};
    int result2 = solution.maxSubArray(nums2);
    assert(result2 == 1);
    std::cout << "Test 2 PASSED: [1] -> " << result2 << std::endl;
    
    // Test case 3: [5,4,-1,7,8]
    std::vector<int> nums3 = {5, 4, -1, 7, 8};
    int result3 = solution.maxSubArray(nums3);
    assert(result3 == 23);
    std::cout << "Test 3 PASSED: [5,4,-1,7,8] -> " << result3 << std::endl;
    
    // Test case 4: [-1]
    std::vector<int> nums4 = {-1};
    int result4 = solution.maxSubArray(nums4);
    assert(result4 == -1);
    std::cout << "Test 4 PASSED: [-1] -> " << result4 << std::endl;
}

int main() {
    try {
        testMaxSubArray();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
