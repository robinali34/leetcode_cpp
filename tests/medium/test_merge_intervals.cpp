/*
 * Copyright 2025 Robina Li. MIT License
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

void testMerge2() {
    MergeIntervals::Solution solution;
    
    // Test case 1: [[1,3],[2,6],[8,10],[15,18]]
    std::vector<std::vector<int>> intervals1 = {{1,3}, {2,6}, {8,10}, {15,18}};
    std::vector<std::vector<int>> result1 = solution.merge2(intervals1);
    std::vector<std::vector<int>> expected1 = {{1,6}, {8,10}, {15,18}};
    assert(result1 == expected1);
    std::cout << "Test 1 PASSED (merge2): [[1,3],[2,6],[8,10],[15,18]] -> [[1,6],[8,10],[15,18]]" << std::endl;
    
    // Test case 2: [[1,4],[4,5]]
    std::vector<std::vector<int>> intervals2 = {{1,4}, {4,5}};
    std::vector<std::vector<int>> result2 = solution.merge2(intervals2);
    std::vector<std::vector<int>> expected2 = {{1,5}};
    assert(result2 == expected2);
    std::cout << "Test 2 PASSED (merge2): [[1,4],[4,5]] -> [[1,5]]" << std::endl;
    
    // Test case 3: [[1,4],[0,4]]
    std::vector<std::vector<int>> intervals3 = {{1,4}, {0,4}};
    std::vector<std::vector<int>> result3 = solution.merge2(intervals3);
    std::vector<std::vector<int>> expected3 = {{0,4}};
    assert(result3 == expected3);
    std::cout << "Test 3 PASSED (merge2): [[1,4],[0,4]] -> [[0,4]]" << std::endl;
    
    // Test case 4: Empty intervals
    std::vector<std::vector<int>> intervals4 = {};
    std::vector<std::vector<int>> result4 = solution.merge2(intervals4);
    assert(result4.empty());
    std::cout << "Test 4 PASSED (merge2): [] -> []" << std::endl;
}

void testMergeGraph() {
    MergeIntervals::Solution solution;
    
    // Test case 1: [[1,3],[2,6],[8,10],[15,18]]
    std::vector<std::vector<int>> intervals1 = {{1,3}, {2,6}, {8,10}, {15,18}};
    std::vector<std::vector<int>> result1 = solution.mergeGraph(intervals1);
    std::vector<std::vector<int>> expected1 = {{1,6}, {8,10}, {15,18}};
    assert(result1 == expected1);
    std::cout << "Test 1 PASSED (mergeGraph): [[1,3],[2,6],[8,10],[15,18]] -> [[1,6],[8,10],[15,18]]" << std::endl;
    
    // Test case 2: [[1,4],[4,5]]
    std::vector<std::vector<int>> intervals2 = {{1,4}, {4,5}};
    std::vector<std::vector<int>> result2 = solution.mergeGraph(intervals2);
    std::vector<std::vector<int>> expected2 = {{1,5}};
    assert(result2 == expected2);
    std::cout << "Test 2 PASSED (mergeGraph): [[1,4],[4,5]] -> [[1,5]]" << std::endl;
    
    // Test case 3: [[1,4],[0,4]]
    std::vector<std::vector<int>> intervals3 = {{1,4}, {0,4}};
    std::vector<std::vector<int>> result3 = solution.mergeGraph(intervals3);
    std::vector<std::vector<int>> expected3 = {{0,4}};
    assert(result3 == expected3);
    std::cout << "Test 3 PASSED (mergeGraph): [[1,4],[0,4]] -> [[0,4]]" << std::endl;
    
    // Test case 4: Empty intervals
    std::vector<std::vector<int>> intervals4 = {};
    std::vector<std::vector<int>> result4 = solution.mergeGraph(intervals4);
    assert(result4.empty());
    std::cout << "Test 4 PASSED (mergeGraph): [] -> []" << std::endl;
}

void testMergeConcise() {
    MergeIntervals::Solution solution;
    
    // Test case 1: [[1,3],[2,6],[8,10],[15,18]]
    std::vector<std::vector<int>> intervals1 = {{1,3}, {2,6}, {8,10}, {15,18}};
    std::vector<std::vector<int>> result1 = solution.mergeConcise(intervals1);
    std::vector<std::vector<int>> expected1 = {{1,6}, {8,10}, {15,18}};
    assert(result1 == expected1);
    std::cout << "Test 1 PASSED (mergeConcise): [[1,3],[2,6],[8,10],[15,18]] -> [[1,6],[8,10],[15,18]]" << std::endl;
    
    // Test case 2: [[1,4],[4,5]]
    std::vector<std::vector<int>> intervals2 = {{1,4}, {4,5}};
    std::vector<std::vector<int>> result2 = solution.mergeConcise(intervals2);
    std::vector<std::vector<int>> expected2 = {{1,5}};
    assert(result2 == expected2);
    std::cout << "Test 2 PASSED (mergeConcise): [[1,4],[4,5]] -> [[1,5]]" << std::endl;
    
    // Test case 3: [[1,4],[0,4]]
    std::vector<std::vector<int>> intervals3 = {{1,4}, {0,4}};
    std::vector<std::vector<int>> result3 = solution.mergeConcise(intervals3);
    std::vector<std::vector<int>> expected3 = {{0,4}};
    assert(result3 == expected3);
    std::cout << "Test 3 PASSED (mergeConcise): [[1,4],[0,4]] -> [[0,4]]" << std::endl;
    
    // Test case 4: Empty intervals
    std::vector<std::vector<int>> intervals4 = {};
    std::vector<std::vector<int>> result4 = solution.mergeConcise(intervals4);
    assert(result4.empty());
    std::cout << "Test 4 PASSED (mergeConcise): [] -> []" << std::endl;
}

int main() {
    try {
        testMerge();
        std::cout << "\n--- Testing merge2 method ---" << std::endl;
        testMerge2();
        std::cout << "\n--- Testing mergeGraph method ---" << std::endl;
        testMergeGraph();
        std::cout << "\n--- Testing mergeConcise method ---" << std::endl;
        testMergeConcise();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
