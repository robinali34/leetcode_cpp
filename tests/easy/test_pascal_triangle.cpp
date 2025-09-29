/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_pascal_triangle.cpp
 * @desc : Test file for Pascal's Triangle
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/easy/pascal_triangle/solution.h"
#include "../../src/easy/pascal_triangle/solution.cpp"

void testPascalTriangle() {
    PascalTriangle::Solution solution;
    
    // Test case 1: numRows = 5
    int numRows1 = 5;
    vector<vector<int>> result1 = solution.generate(numRows1);
    assert(result1.size() == 5);
    assert(result1[0] == (vector<int>{1}));
    assert(result1[1] == (vector<int>{1, 1}));
    assert(result1[2] == (vector<int>{1, 2, 1}));
    assert(result1[3] == (vector<int>{1, 3, 3, 1}));
    assert(result1[4] == (vector<int>{1, 4, 6, 4, 1}));
    std::cout << "Test 1 PASSED: numRows=5" << std::endl;
    
    // Test case 2: numRows = 1
    int numRows2 = 1;
    vector<vector<int>> result2 = solution.generate(numRows2);
    assert(result2.size() == 1);
    assert(result2[0] == (vector<int>{1}));
    std::cout << "Test 2 PASSED: numRows=1" << std::endl;
}

int main() {
    try {
        testPascalTriangle();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
