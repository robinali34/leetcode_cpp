/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_contains_duplicate.cpp
 * @desc : Test file for Contains Duplicate
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/easy/contains_duplicate/solution.h"
#include "../../src/easy/contains_duplicate/solution.cpp"

void testContainsDuplicate() {
    std::cout << "Testing Contains Duplicate..." << std::endl;
    
    ContainsDuplicate::Solution solution;
    
    // Test case 1: Array with duplicates
    std::vector<int> nums1 = {1, 2, 3, 1};
    assert(solution.containsDuplicate(nums1) == true);
    assert(solution.containsDuplicateHashMap(nums1) == true);
    std::cout << "Test 1 PASSED: [1,2,3,1] has duplicates" << std::endl;
    
    // Test case 2: Array without duplicates
    std::vector<int> nums2 = {1, 2, 3, 4};
    assert(solution.containsDuplicate(nums2) == false);
    assert(solution.containsDuplicateHashMap(nums2) == false);
    std::cout << "Test 2 PASSED: [1,2,3,4] has no duplicates" << std::endl;
    
    // Test case 3: Array with multiple duplicates
    std::vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    assert(solution.containsDuplicate(nums3) == true);
    assert(solution.containsDuplicateHashMap(nums3) == true);
    std::cout << "Test 3 PASSED: [1,1,1,3,3,4,3,2,4,2] has duplicates" << std::endl;
    
    // Test case 4: Single element
    std::vector<int> nums4 = {1};
    assert(solution.containsDuplicate(nums4) == false);
    assert(solution.containsDuplicateHashMap(nums4) == false);
    std::cout << "Test 4 PASSED: [1] has no duplicates" << std::endl;
    
    // Test case 5: Two identical elements
    std::vector<int> nums5 = {1, 1};
    assert(solution.containsDuplicate(nums5) == true);
    assert(solution.containsDuplicateHashMap(nums5) == true);
    std::cout << "Test 5 PASSED: [1,1] has duplicates" << std::endl;
    
    // Test case 6: Empty array
    std::vector<int> nums6 = {};
    assert(solution.containsDuplicate(nums6) == false);
    assert(solution.containsDuplicateHashMap(nums6) == false);
    std::cout << "Test 6 PASSED: [] has no duplicates" << std::endl;
    
    // Test case 7: Large array with duplicates
    std::vector<int> nums7 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
    assert(solution.containsDuplicate(nums7) == true);
    assert(solution.containsDuplicateHashMap(nums7) == true);
    std::cout << "Test 7 PASSED: Large array with duplicates" << std::endl;
    
    // Test case 8: Large array without duplicates
    std::vector<int> nums8 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    assert(solution.containsDuplicate(nums8) == false);
    assert(solution.containsDuplicateHashMap(nums8) == false);
    std::cout << "Test 8 PASSED: Large array without duplicates" << std::endl;
    
    // Test case 9: Negative numbers with duplicates
    std::vector<int> nums9 = {-1, -2, -3, -1};
    assert(solution.containsDuplicate(nums9) == true);
    assert(solution.containsDuplicateHashMap(nums9) == true);
    std::cout << "Test 9 PASSED: Negative numbers with duplicates" << std::endl;
    
    // Test case 10: Mixed positive and negative numbers
    std::vector<int> nums10 = {-1, 0, 1, -1};
    assert(solution.containsDuplicate(nums10) == true);
    assert(solution.containsDuplicateHashMap(nums10) == true);
    std::cout << "Test 10 PASSED: Mixed numbers with duplicates" << std::endl;
    
    // Test case 11: All same elements
    std::vector<int> nums11 = {5, 5, 5, 5, 5};
    assert(solution.containsDuplicate(nums11) == true);
    assert(solution.containsDuplicateHashMap(nums11) == true);
    std::cout << "Test 11 PASSED: All same elements" << std::endl;
    
    // Test case 12: Duplicates at the end
    std::vector<int> nums12 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1};
    assert(solution.containsDuplicate(nums12) == true);
    assert(solution.containsDuplicateHashMap(nums12) == true);
    std::cout << "Test 12 PASSED: Duplicates at the end" << std::endl;
    
    // Test case 13: Duplicates at the beginning
    std::vector<int> nums13 = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    assert(solution.containsDuplicate(nums13) == true);
    assert(solution.containsDuplicateHashMap(nums13) == true);
    std::cout << "Test 13 PASSED: Duplicates at the beginning" << std::endl;
    
    // Test case 14: Duplicates in the middle
    std::vector<int> nums14 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 25, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
    assert(solution.containsDuplicate(nums14) == true);
    assert(solution.containsDuplicateHashMap(nums14) == true);
    std::cout << "Test 14 PASSED: Duplicates in the middle" << std::endl;
    
    // Test case 15: Edge case with zero
    std::vector<int> nums15 = {0, 1, 2, 3, 0};
    assert(solution.containsDuplicate(nums15) == true);
    assert(solution.containsDuplicateHashMap(nums15) == true);
    std::cout << "Test 15 PASSED: Zero duplicates" << std::endl;
}

void testPerformanceComparison() {
    std::cout << "\nTesting Performance Comparison..." << std::endl;
    
    ContainsDuplicate::Solution solution;
    
    // Create a large array with duplicates
    std::vector<int> largeNums;
    for (int i = 0; i < 10000; i++) {
        largeNums.push_back(i);
    }
    largeNums.push_back(5000); // Add a duplicate
    
    // Both methods should return the same result
    bool result1 = solution.containsDuplicate(largeNums);
    bool result2 = solution.containsDuplicateHashMap(largeNums);
    
    assert(result1 == result2);
    assert(result1 == true);
    std::cout << "Test 1 PASSED: Large array - both methods agree" << std::endl;
    
    // Test with no duplicates
    std::vector<int> noDupNums;
    for (int i = 0; i < 10000; i++) {
        noDupNums.push_back(i);
    }
    
    bool result3 = solution.containsDuplicate(noDupNums);
    bool result4 = solution.containsDuplicateHashMap(noDupNums);
    
    assert(result3 == result4);
    assert(result3 == false);
    std::cout << "Test 2 PASSED: Large array no duplicates - both methods agree" << std::endl;
}

int main() {
    try {
        testContainsDuplicate();
        testPerformanceComparison();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}