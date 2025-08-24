/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_insert_interval.cpp
 * @desc : Test file for Insert Interval
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/insert_interval/solution.h"
#include "../../src/medium/insert_interval/solution.cpp"

using namespace std;

void testInsert() {
    InsertInterval::Solution solution;
    
    // Test case 1: intervals = [[1,3],[6,9]], newInterval = [2,5]
    vector<vector<int>> intervals1 = {{1,3}, {6,9}};
    vector<int> newInterval1 = {2, 5};
    vector<vector<int>> result1 = solution.insert(intervals1, newInterval1);
    vector<vector<int>> expected1 = {{1,5}, {6,9}};
    assert(result1 == expected1);
    cout << "Test 1 PASSED: [[1,3],[6,9]] + [2,5] -> [[1,5],[6,9]]" << endl;
    
    // Test case 2: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
    vector<vector<int>> intervals2 = {{1,2}, {3,5}, {6,7}, {8,10}, {12,16}};
    vector<int> newInterval2 = {4, 8};
    vector<vector<int>> result2 = solution.insert(intervals2, newInterval2);
    vector<vector<int>> expected2 = {{1,2}, {3,10}, {12,16}};
    assert(result2 == expected2);
    cout << "Test 2 PASSED: [[1,2],[3,5],[6,7],[8,10],[12,16]] + [4,8] -> [[1,2],[3,10],[12,16]]" << endl;
    
    // Test case 3: intervals = [], newInterval = [5,7]
    vector<vector<int>> intervals3 = {};
    vector<int> newInterval3 = {5, 7};
    vector<vector<int>> result3 = solution.insert(intervals3, newInterval3);
    vector<vector<int>> expected3 = {{5, 7}};
    assert(result3 == expected3);
    cout << "Test 3 PASSED: [] + [5,7] -> [[5,7]]" << endl;
}

void testInsert2() {
    InsertInterval::Solution solution;
    
    // Test case 1: intervals = [[1,3],[6,9]], newInterval = [2,5]
    vector<vector<int>> intervals1 = {{1,3}, {6,9}};
    vector<int> newInterval1 = {2, 5};
    vector<vector<int>> result1 = solution.insert2(intervals1, newInterval1);
    vector<vector<int>> expected1 = {{1,5}, {6,9}};
    assert(result1 == expected1);
    cout << "Test 1 PASSED (insert2): [[1,3],[6,9]] + [2,5] -> [[1,5],[6,9]]" << endl;
    
    // Test case 2: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
    vector<vector<int>> intervals2 = {{1,2}, {3,5}, {6,7}, {8,10}, {12,16}};
    vector<int> newInterval2 = {4, 8};
    vector<vector<int>> result2 = solution.insert2(intervals2, newInterval2);
    vector<vector<int>> expected2 = {{1,2}, {3,10}, {12,16}};
    assert(result2 == expected2);
    cout << "Test 2 PASSED (insert2): [[1,2],[3,5],[6,7],[8,10],[12,16]] + [4,8] -> [[1,2],[3,10],[12,16]]" << endl;
    
    // Test case 3: intervals = [], newInterval = [5,7]
    vector<vector<int>> intervals3 = {};
    vector<int> newInterval3 = {5, 7};
    vector<vector<int>> result3 = solution.insert2(intervals3, newInterval3);
    vector<vector<int>> expected3 = {{5, 7}};
    assert(result3 == expected3);
    cout << "Test 3 PASSED (insert2): [] + [5,7] -> [[5,7]]" << endl;
    
    // Test case 4: newInterval completely overlaps existing intervals
    vector<vector<int>> intervals4 = {{1,5}, {10,15}};
    vector<int> newInterval4 = {2, 12};
    vector<vector<int>> result4 = solution.insert2(intervals4, newInterval4);
    vector<vector<int>> expected4 = {{1,15}};
    assert(result4 == expected4);
    cout << "Test 4 PASSED (insert2): [[1,5],[10,15]] + [2,12] -> [[1,15]]" << endl;
}

int main() {
    try {
        testInsert();
        testInsert2();
        cout << "\n=== All tests PASSED ===" << endl;
        return 0;
    } catch (const exception& e) {
        cerr << "Test failed: " << e.what() << endl;
        return 1;
    }
}
