/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_merge_sorted_array.cpp
 * @desc : Test file for Merge Sorted Array
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/easy/merge_sorted_array/solution.h"
#include "../../src/easy/merge_sorted_array/solution.cpp"

void testMergeSortedArray() {
    MergeSortedArray::Solution solution;
    
    // Test case 1: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    solution.merge(nums1, 3, nums2, 3);
    vector<int> expected1 = {1, 2, 2, 3, 5, 6};
    assert(nums1 == expected1);
    std::cout << "Test 1 PASSED: Merge [1,2,3,0,0,0] and [2,5,6]" << std::endl;
    
    // Test case 2: nums1 = [1], m = 1, nums2 = [], n = 0
    vector<int> nums3 = {1};
    vector<int> nums4 = {};
    solution.merge(nums3, 1, nums4, 0);
    vector<int> expected2 = {1};
    assert(nums3 == expected2);
    std::cout << "Test 2 PASSED: Merge [1] and []" << std::endl;
    
    // Test case 3: nums1 = [0], m = 0, nums2 = [1], n = 1
    vector<int> nums5 = {0};
    vector<int> nums6 = {1};
    solution.merge(nums5, 0, nums6, 1);
    vector<int> expected3 = {1};
    assert(nums5 == expected3);
    std::cout << "Test 3 PASSED: Merge [0] and [1]" << std::endl;
}

int main() {
    try {
        testMergeSortedArray();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
