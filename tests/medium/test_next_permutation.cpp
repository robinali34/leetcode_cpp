/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_next_permutation.cpp
 * @desc : Test file for Next Permutation
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/next_permutation/solution.h"
#include "../../src/medium/next_permutation/solution.cpp"

void testNextPermutation() {
    NextPermutation::Solution solution;
    
    // Test case 1: nums = [1,2,3] -> [1,3,2]
    vector<int> nums1 = {1, 2, 3};
    solution.nextPermutation(nums1);
    vector<int> expected1 = {1, 3, 2};
    assert(nums1 == expected1);
    std::cout << "Test 1 PASSED: [1,2,3] -> [1,3,2]" << std::endl;
    
    // Test case 2: nums = [3,2,1] -> [1,2,3]
    vector<int> nums2 = {3, 2, 1};
    solution.nextPermutation(nums2);
    vector<int> expected2 = {1, 2, 3};
    assert(nums2 == expected2);
    std::cout << "Test 2 PASSED: [3,2,1] -> [1,2,3]" << std::endl;
    
    // Test case 3: nums = [1,1,5] -> [1,5,1]
    vector<int> nums3 = {1, 1, 5};
    solution.nextPermutation(nums3);
    vector<int> expected3 = {1, 5, 1};
    assert(nums3 == expected3);
    std::cout << "Test 3 PASSED: [1,1,5] -> [1,5,1]" << std::endl;
}

int main() {
    try {
        testNextPermutation();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
