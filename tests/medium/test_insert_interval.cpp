/*
 * Copyright 2021 Robina Li. MIT License
 * @file : test_insert_interval.cpp
 * @desc : Test file for Insert Interval
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/insert_interval/solution.h"
#include "../../src/medium/insert_interval/solution.cpp"

void testInsert() {
    InsertInterval::Solution solution;
    
    // Test case 1: intervals = [[1,3],[6,9]], newInterval = [2,5]
    std::vector<std::vector<int>> intervals1 = {{1,3}, {6,9}};
    std::vector<int> newInterval1 = {2, 5};
    std::vector<std::vector<int>> result1 = solution.insert(intervals1, newInterval1);
    std::vector<std::vector<int>> expected1 = {{1,5}, {6,9}};
    assert(result1 == expected1);
    std::cout << "Test 1 PASSED: [[1,3],[6,9]] + [2,5] -> [[1,5],[6,9]]" << std::endl;
    
    // Test case 2: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
    std::vector<std::vector<int>> intervals2 = {{1,2}, {3,5}, {6,7}, {8,10}, {12,16}};
    std::vector<int> newInterval2 = {4, 8};
    std::vector<std::vector<int>> result2 = solution.insert(intervals2, newInterval2);
    std::vector<std::vector<int>> expected2 = {{1,2}, {3,10}, {12,16}};
    assert(result2 == expected2);
    std::cout << "Test 2 PASSED: [[1,2],[3,5],[6,7],[8,10],[12,16]] + [4,8] -> [[1,2],[3,10],[12,16]]" << std::endl;
    
    // Test case 3: intervals = [], newInterval = [5,7]
    std::vector<std::vector<int>> intervals3 = {};
    std::vector<int> newInterval3 = {5, 7};
    std::vector<std::vector<int>> result3 = solution.insert(intervals3, newInterval3);
    std::vector<std::vector<int>> expected3 = {{5, 7}};
    assert(result3 == expected3);
    std::cout << "Test 3 PASSED: [] + [5,7] -> [[5,7]]" << std::endl;
}

int main() {
    try {
        testInsert();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
