/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_kth_largest_element.cpp
 * @desc : Test file for Kth Largest Element in an Array
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/kth_largest_element/solution.h"
#include "../../src/medium/kth_largest_element/solution.cpp"

void testKthLargestElement() {
    KthLargestElement::Solution solution;
    
    // Test case 1: nums = [3,2,1,5,6,4], k = 2 -> 5
    vector<int> nums1 = {3, 2, 1, 5, 6, 4};
    int k1 = 2;
    int result1 = solution.findKthLargest(nums1, k1);
    assert(result1 == 5);
    std::cout << "Test 1 PASSED: [3,2,1,5,6,4], k=2 -> " << result1 << std::endl;
    
    // Test case 2: nums = [3,2,3,1,2,4,5,5,6], k = 4 -> 4
    vector<int> nums2 = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k2 = 4;
    int result2 = solution.findKthLargest(nums2, k2);
    assert(result2 == 4);
    std::cout << "Test 2 PASSED: [3,2,3,1,2,4,5,5,6], k=4 -> " << result2 << std::endl;
    
    // Test case 3: nums = [1], k = 1 -> 1
    vector<int> nums3 = {1};
    int k3 = 1;
    int result3 = solution.findKthLargest(nums3, k3);
    assert(result3 == 1);
    std::cout << "Test 3 PASSED: [1], k=1 -> " << result3 << std::endl;
}

int main() {
    try {
        testKthLargestElement();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
