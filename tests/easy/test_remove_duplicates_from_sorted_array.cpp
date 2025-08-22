/*
 * Copyright 2021 Robina Li. BSD 3-Clause License All Rights Reserved.
 * @file : test_remove_duplicates_from_sorted_array.cpp
 * @desc : Test file for Remove Duplicates from Sorted Array solution
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/easy/remove_duplicates_from_sorted_array/solution.cpp"

void testRemoveDuplicates() {
    RemoveDuplicatesFromSortedArray::Solution solution;
    
    // Test case 1: [1,1,2] -> 2, [1,2,_]
    std::vector<int> nums1 = {1, 1, 2};
    int result1 = solution.removeDuplicates(nums1);
    assert(result1 == 2);
    assert(nums1[0] == 1);
    assert(nums1[1] == 2);
    std::cout << "Test 1 PASSED: [1,1,2] -> 2, [1,2,_]" << std::endl;
    
    // Test case 2: [0,0,1,1,1,2,2,3,3,4] -> 5, [0,1,2,3,4,_,_,_,_,_]
    std::vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int result2 = solution.removeDuplicates(nums2);
    assert(result2 == 5);
    assert(nums2[0] == 0);
    assert(nums2[1] == 1);
    assert(nums2[2] == 2);
    assert(nums2[3] == 3);
    assert(nums2[4] == 4);
    std::cout << "Test 2 PASSED: [0,0,1,1,1,2,2,3,3,4] -> 5, [0,1,2,3,4,_,_,_,_,_]" << std::endl;
    
    // Test case 3: [1,1,1,1,1] -> 1, [1,_,_,_,_]
    std::vector<int> nums3 = {1, 1, 1, 1, 1};
    int result3 = solution.removeDuplicates(nums3);
    assert(result3 == 1);
    assert(nums3[0] == 1);
    std::cout << "Test 3 PASSED: [1,1,1,1,1] -> 1, [1,_,_,_,_]" << std::endl;
    
    // Test case 4: [1,2,3,4,5] -> 5, [1,2,3,4,5]
    std::vector<int> nums4 = {1, 2, 3, 4, 5};
    int result4 = solution.removeDuplicates(nums4);
    assert(result4 == 5);
    assert(nums4[0] == 1);
    assert(nums4[1] == 2);
    assert(nums4[2] == 3);
    assert(nums4[3] == 4);
    assert(nums4[4] == 5);
    std::cout << "Test 4 PASSED: [1,2,3,4,5] -> 5, [1,2,3,4,5]" << std::endl;
    
    // Test case 5: Empty array -> 0
    std::vector<int> nums5 = {};
    int result5 = solution.removeDuplicates(nums5);
    assert(result5 == 0);
    std::cout << "Test 5 PASSED: [] -> 0" << std::endl;
    
    // Test case 6: Single element -> 1
    std::vector<int> nums6 = {5};
    int result6 = solution.removeDuplicates(nums6);
    assert(result6 == 1);
    assert(nums6[0] == 5);
    std::cout << "Test 6 PASSED: [5] -> 1" << std::endl;
    
    std::cout << "All tests for removeDuplicates PASSED!" << std::endl;
}

int main() {
    try {
        testRemoveDuplicates();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed with exception: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "Test failed with unknown exception" << std::endl;
        return 1;
    }
}
