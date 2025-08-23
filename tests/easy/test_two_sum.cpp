/*
 * Copyright 2021 Robina Li. MIT License
 * @file : test_two_sum.cpp
 * @desc : Test file for Two Sum
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/easy/two_sum/solution.h"
#include "../../src/easy/two_sum/solution.cpp"

void testTwoSum() {
    TwoSum::Solution solution;
    
    // Test case 1: [2,7,11,15], target = 9
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    std::vector<int> result1 = solution.twoSum(nums1, target1);
    assert(result1.size() == 2);
    assert(nums1[result1[0]] + nums1[result1[1]] == target1);
    std::cout << "Test 1 PASSED: [2,7,11,15], target=9 -> [" << result1[0] << "," << result1[1] << "]" << std::endl;
    
    // Test case 2: [3,2,4], target = 6
    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    std::vector<int> result2 = solution.twoSum(nums2, target2);
    assert(result2.size() == 2);
    assert(nums2[result2[0]] + nums2[result2[1]] == target2);
    std::cout << "Test 2 PASSED: [3,2,4], target=6 -> [" << result2[0] << "," << result2[1] << "]" << std::endl;
    
    // Test case 3: [3,3], target = 6
    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    std::vector<int> result3 = solution.twoSum(nums3, target3);
    assert(result3.size() == 2);
    assert(nums3[result3[0]] + nums3[result3[1]] == target3);
    std::cout << "Test 3 PASSED: [3,3], target=6 -> [" << result3[0] << "," << result3[1] << "]" << std::endl;
}

int main() {
    try {
        testTwoSum();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
