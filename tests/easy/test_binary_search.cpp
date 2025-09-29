/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_binary_search.cpp
 * @desc : Test file for Binary Search
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/easy/binary_search/solution.h"
#include "../../src/easy/binary_search/solution.cpp"

void testBinarySearch() {
    BinarySearch::Solution solution;
    
    // Test case 1: nums = [-1,0,3,5,9,12], target = 9 -> 4
    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;
    int result1 = solution.search(nums1, target1);
    assert(result1 == 4);
    std::cout << "Test 1 PASSED: [-1,0,3,5,9,12], target=9 -> " << result1 << std::endl;
    
    // Test case 2: nums = [-1,0,3,5,9,12], target = 2 -> -1
    vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;
    int result2 = solution.search(nums2, target2);
    assert(result2 == -1);
    std::cout << "Test 2 PASSED: [-1,0,3,5,9,12], target=2 -> " << result2 << std::endl;
    
    // Test case 3: nums = [5], target = 5 -> 0
    vector<int> nums3 = {5};
    int target3 = 5;
    int result3 = solution.search(nums3, target3);
    assert(result3 == 0);
    std::cout << "Test 3 PASSED: [5], target=5 -> " << result3 << std::endl;
}

int main() {
    try {
        testBinarySearch();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
