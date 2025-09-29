/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_majority_element_sorted_array.cpp
 * @desc : Test file for Check If a Number Is Majority Element in a Sorted Array
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/easy/majority_element_sorted_array/solution.h"
#include "../../src/easy/majority_element_sorted_array/solution.cpp"

void testMajorityElementSortedArray() {
    MajorityElementSortedArray::Solution solution;
    
    // Test case 1: nums = [2,4,5,5,5,5,5,6,6], target = 5 -> true
    vector<int> nums1 = {2, 4, 5, 5, 5, 5, 5, 6, 6};
    int target1 = 5;
    bool result1 = solution.isMajorityElement(nums1, target1);
    assert(result1 == true);
    std::cout << "Test 1 PASSED: [2,4,5,5,5,5,5,6,6], target=5 -> " << (result1 ? "true" : "false") << std::endl;
    
    // Test case 2: nums = [10,100,101,101], target = 101 -> false
    vector<int> nums2 = {10, 100, 101, 101};
    int target2 = 101;
    bool result2 = solution.isMajorityElement(nums2, target2);
    assert(result2 == false);
    std::cout << "Test 2 PASSED: [10,100,101,101], target=101 -> " << (result2 ? "true" : "false") << std::endl;
    
    // Test case 3: nums = [1,1,1,1,1], target = 1 -> true
    vector<int> nums3 = {1, 1, 1, 1, 1};
    int target3 = 1;
    bool result3 = solution.isMajorityElement(nums3, target3);
    assert(result3 == true);
    std::cout << "Test 3 PASSED: [1,1,1,1,1], target=1 -> " << (result3 ? "true" : "false") << std::endl;
    
    // Test case 4: nums = [1,2,3,4,5], target = 3 -> false
    vector<int> nums4 = {1, 2, 3, 4, 5};
    int target4 = 3;
    bool result4 = solution.isMajorityElement(nums4, target4);
    assert(result4 == false);
    std::cout << "Test 4 PASSED: [1,2,3,4,5], target=3 -> " << (result4 ? "true" : "false") << std::endl;
}

void testMajorityElementBinarySearch() {
    MajorityElementSortedArray::Solution solution;
    
    // Test case 1: nums = [2,4,5,5,5,5,5,6,6], target = 5 -> true
    vector<int> nums1 = {2, 4, 5, 5, 5, 5, 5, 6, 6};
    int target1 = 5;
    bool result1 = solution.isMajorityElementBinarySearch(nums1, target1);
    assert(result1 == true);
    std::cout << "Binary Search Test 1 PASSED: [2,4,5,5,5,5,5,6,6], target=5 -> " << (result1 ? "true" : "false") << std::endl;
    
    // Test case 2: nums = [10,100,101,101], target = 101 -> false
    vector<int> nums2 = {10, 100, 101, 101};
    int target2 = 101;
    bool result2 = solution.isMajorityElementBinarySearch(nums2, target2);
    assert(result2 == false);
    std::cout << "Binary Search Test 2 PASSED: [10,100,101,101], target=101 -> " << (result2 ? "true" : "false") << std::endl;
    
    // Test case 3: nums = [1,1,1,1,1], target = 1 -> true
    vector<int> nums3 = {1, 1, 1, 1, 1};
    int target3 = 1;
    bool result3 = solution.isMajorityElementBinarySearch(nums3, target3);
    assert(result3 == true);
    std::cout << "Binary Search Test 3 PASSED: [1,1,1,1,1], target=1 -> " << (result3 ? "true" : "false") << std::endl;
    
    // Test case 4: nums = [1,2,3,4,5], target = 3 -> false
    vector<int> nums4 = {1, 2, 3, 4, 5};
    int target4 = 3;
    bool result4 = solution.isMajorityElementBinarySearch(nums4, target4);
    assert(result4 == false);
    std::cout << "Binary Search Test 4 PASSED: [1,2,3,4,5], target=3 -> " << (result4 ? "true" : "false") << std::endl;
    
    // Test case 5: nums = [1,1,2,2,2], target = 2 -> true
    vector<int> nums5 = {1, 1, 2, 2, 2};
    int target5 = 2;
    bool result5 = solution.isMajorityElementBinarySearch(nums5, target5);
    assert(result5 == true);
    std::cout << "Binary Search Test 5 PASSED: [1,1,2,2,2], target=2 -> " << (result5 ? "true" : "false") << std::endl;
}


int main() {
    try {
        testMajorityElementSortedArray();
        testMajorityElementBinarySearch();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
