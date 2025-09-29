/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_search_rotated_sorted_array.cpp
 * @desc : Test file for Search in Rotated Sorted Array
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/search_rotated_sorted_array/solution.h"
#include "../../src/medium/search_rotated_sorted_array/solution.cpp"

void testSearchRotatedSortedArray() {
    SearchRotatedSortedArray::Solution solution;
    
    // Test case 1: nums = [4,5,6,7,0,1,2], target = 0 -> 4
    vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    int target1 = 0;
    int result1 = solution.search(nums1, target1);
    assert(result1 == 4);
    std::cout << "Test 1 PASSED: [4,5,6,7,0,1,2], target=0 -> " << result1 << std::endl;
    
    // Test case 2: nums = [4,5,6,7,0,1,2], target = 3 -> -1
    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    int target2 = 3;
    int result2 = solution.search(nums2, target2);
    assert(result2 == -1);
    std::cout << "Test 2 PASSED: [4,5,6,7,0,1,2], target=3 -> " << result2 << std::endl;
    
    // Test case 3: nums = [1], target = 0 -> -1
    vector<int> nums3 = {1};
    int target3 = 0;
    int result3 = solution.search(nums3, target3);
    assert(result3 == -1);
    std::cout << "Test 3 PASSED: [1], target=0 -> " << result3 << std::endl;
}

int main() {
    try {
        testSearchRotatedSortedArray();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
