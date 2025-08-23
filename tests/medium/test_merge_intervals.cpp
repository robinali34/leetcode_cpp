/*
 * Copyright 2021 Robina Li. MIT License
 * @file : test_merge_intervals.cpp
 * @desc : Test file for Merge Intervals
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/merge_intervals/solution.h"
#include "../../src/medium/merge_intervals/solution.cpp"

void testMerge() {
    MergeIntervals::Solution solution;
    
    // Test case 1: [[1,3],[2,6],[8,10],[15,18]]
    std::vector<std::vector<int>> intervals1 = {{1,3}, {2,6}, {8,10}, {15,18}};
    std::vector<std::vector<int>> result1 = solution.merge(intervals1);
    std::vector<std::vector<int>> expected1 = {{1,6}, {8,10}, {15,18}};
    assert(result1 == expected1);
    std::cout << "Test 1 PASSED: [[1,3],[2,6],[8,10],[15,18]] -> [[1,6],[8,10],[15,18]]" << std::endl;
    
    // Test case 2: [[1,4],[4,5]]
    std::vector<std::vector<int>> intervals2 = {{1,4}, {4,5}};
    std::vector<std::vector<int>> result2 = solution.merge(intervals2);
    std::vector<std::vector<int>> expected2 = {{1,5}};
    assert(result2 == expected2);
    std::cout << "Test 2 PASSED: [[1,4],[4,5]] -> [[1,5]]" << std::endl;
    
    // Test case 3: [[1,4],[0,4]]
    std::vector<std::vector<int>> intervals3 = {{1,4}, {0,4}};
    std::vector<std::vector<int>> result3 = solution.merge(intervals3);
    std::vector<std::vector<int>> expected3 = {{0,4}};
    assert(result3 == expected3);
    std::cout << "Test 3 PASSED: [[1,4],[0,4]] -> [[0,4]]" << std::endl;
    
    // Test case 4: Empty intervals
    std::vector<std::vector<int>> intervals4 = {};
    std::vector<std::vector<int>> result4 = solution.merge(intervals4);
    assert(result4.empty());
    std::cout << "Test 4 PASSED: [] -> []" << std::endl;
}

int main() {
    try {
        testMerge();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
