/*
 * Copyright 2021 Robina Li. BSD 3-Clause License All Rights Reserved.
 * @file : test_rotate_array.cpp
 * @desc : Test file for Rotate Array solution
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/rotate_array/solution.cpp"

void testRotate() {
    RotateArray::Solution solution;
    
    // Test case 1: [1,2,3,4,5,6,7], k=3 -> [5,6,7,1,2,3,4]
    std::vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> expected1 = {5, 6, 7, 1, 2, 3, 4};
    
    solution.rotate(nums1, 3);
    assert(nums1 == expected1);
    std::cout << "Test 1 PASSED: [1,2,3,4,5,6,7], k=3 -> [5,6,7,1,2,3,4]" << std::endl;
    
    // Test case 2: [-1,-100,3,99], k=2 -> [3,99,-1,-100]
    std::vector<int> nums2 = {-1, -100, 3, 99};
    std::vector<int> expected2 = {3, 99, -1, -100};
    
    solution.rotate(nums2, 2);
    assert(nums2 == expected2);
    std::cout << "Test 2 PASSED: [-1,-100,3,99], k=2 -> [3,99,-1,-100]" << std::endl;
    
    // Test case 3: [1,2,3], k=5 -> [2,3,1] (k % n = 2)
    std::vector<int> nums3 = {1, 2, 3};
    std::vector<int> expected3 = {2, 3, 1};
    
    solution.rotate(nums3, 5);
    assert(nums3 == expected3);
    std::cout << "Test 3 PASSED: [1,2,3], k=5 -> [2,3,1]" << std::endl;
    
    // Test case 4: [1,2,3,4], k=0 -> [1,2,3,4] (no rotation)
    std::vector<int> nums4 = {1, 2, 3, 4};
    std::vector<int> expected4 = {1, 2, 3, 4};
    
    solution.rotate(nums4, 0);
    assert(nums4 == expected4);
    std::cout << "Test 4 PASSED: [1,2,3,4], k=0 -> [1,2,3,4]" << std::endl;
    
    // Test case 5: [1,2,3,4], k=4 -> [1,2,3,4] (full rotation)
    std::vector<int> nums5 = {1, 2, 3, 4};
    std::vector<int> expected5 = {1, 2, 3, 4};
    
    solution.rotate(nums5, 4);
    assert(nums5 == expected5);
    std::cout << "Test 5 PASSED: [1,2,3,4], k=4 -> [1,2,3,4]" << std::endl;
    
    // Test case 6: Empty array
    std::vector<int> nums6 = {};
    solution.rotate(nums6, 3);
    assert(nums6.empty());
    std::cout << "Test 6 PASSED: [] -> []" << std::endl;
    
    std::cout << "All tests for rotate PASSED!" << std::endl;
}

void testRotate1() {
    RotateArray::Solution solution;
    
    // Test case 1: [1,2,3,4,5,6,7], k=3 -> [5,6,7,1,2,3,4]
    std::vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> expected1 = {5, 6, 7, 1, 2, 3, 4};
    
    solution.rotate1(nums1, 3);
    assert(nums1 == expected1);
    std::cout << "Test 1 PASSED: [1,2,3,4,5,6,7], k=3 -> [5,6,7,1,2,3,4]" << std::endl;
    
    // Test case 2: [-1,-100,3,99], k=2 -> [3,99,-1,-100]
    std::vector<int> nums2 = {-1, -100, 3, 99};
    std::vector<int> expected2 = {3, 99, -1, -100};
    
    solution.rotate1(nums2, 2);
    assert(nums2 == expected2);
    std::cout << "Test 2 PASSED: [-1,-100,3,99], k=2 -> [3,99,-1,-100]" << std::endl;
    
    // Test case 3: [1,2,3], k=5 -> [2,3,1] (k % n = 2)
    std::vector<int> nums3 = {1, 2, 3};
    std::vector<int> expected3 = {2, 3, 1};
    
    solution.rotate1(nums3, 5);
    assert(nums3 == expected3);
    std::cout << "Test 3 PASSED: [1,2,3], k=5 -> [2,3,1]" << std::endl;
    
    std::cout << "All tests for rotate1 PASSED!" << std::endl;
}

int main() {
    try {
        testRotate();
        testRotate1();
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
