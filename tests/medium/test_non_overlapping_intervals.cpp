/*
 * Copyright 2021 Robina Li. MIT License
 * @file : test_non_overlapping_intervals.cpp
 * @desc : Test file for Non-overlapping Intervals
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/non_overlapping_intervals/solution.h"
#include "../../src/medium/non_overlapping_intervals/solution.cpp"

void testEraseOverlapIntervals() {
    NonOverlappingIntervals::Solution solution;
    
    // Test case 1: [[1,2],[2,3],[3,4],[1,3]]
    std::vector<std::vector<int>> intervals1 = {{1,2}, {2,3}, {3,4}, {1,3}};
    int result1 = solution.eraseOverlapIntervals(intervals1);
    assert(result1 == 1);
    std::cout << "Test 1 PASSED: [[1,2],[2,3],[3,4],[1,3]] -> " << result1 << std::endl;
    
    // Test case 2: [[1,2],[1,2],[1,2]]
    std::vector<std::vector<int>> intervals2 = {{1,2}, {1,2}, {1,2}};
    int result2 = solution.eraseOverlapIntervals(intervals2);
    assert(result2 == 2);
    std::cout << "Test 2 PASSED: [[1,2],[1,2],[1,2]] -> " << result2 << std::endl;
    
    // Test case 3: [[1,2],[2,3]]
    std::vector<std::vector<int>> intervals3 = {{1,2}, {2,3}};
    int result3 = solution.eraseOverlapIntervals(intervals3);
    assert(result3 == 0);
    std::cout << "Test 3 PASSED: [[1,2],[2,3]] -> " << result3 << std::endl;
    
    // Test case 4: Empty intervals
    std::vector<std::vector<int>> intervals4 = {};
    int result4 = solution.eraseOverlapIntervals(intervals4);
    assert(result4 == 0);
    std::cout << "Test 4 PASSED: [] -> " << result4 << std::endl;
}

int main() {
    try {
        testEraseOverlapIntervals();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
