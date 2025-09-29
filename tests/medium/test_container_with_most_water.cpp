/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_container_with_most_water.cpp
 * @desc : Test file for Container With Most Water
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/container_with_most_water/solution.h"
#include "../../src/medium/container_with_most_water/solution.cpp"

void testContainerWithMostWater() {
    ContainerWithMostWater::Solution solution;
    
    // Test case 1: height = [1,8,6,2,5,4,8,3,7] -> 49
    vector<int> height1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result1 = solution.maxArea(height1);
    assert(result1 == 49);
    std::cout << "Test 1 PASSED: [1,8,6,2,5,4,8,3,7] -> " << result1 << std::endl;
    
    // Test case 2: height = [1,1] -> 1
    vector<int> height2 = {1, 1};
    int result2 = solution.maxArea(height2);
    assert(result2 == 1);
    std::cout << "Test 2 PASSED: [1,1] -> " << result2 << std::endl;
    
    // Test case 3: height = [4,3,2,1,4] -> 16
    vector<int> height3 = {4, 3, 2, 1, 4};
    int result3 = solution.maxArea(height3);
    assert(result3 == 16);
    std::cout << "Test 3 PASSED: [4,3,2,1,4] -> " << result3 << std::endl;
}

int main() {
    try {
        testContainerWithMostWater();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
