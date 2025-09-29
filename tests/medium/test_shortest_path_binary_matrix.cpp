/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_shortest_path_binary_matrix.cpp
 * @desc : Test file for Shortest Path in Binary Matrix
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/shortest_path_binary_matrix/solution.h"
#include "../../src/medium/shortest_path_binary_matrix/solution.cpp"

void testShortestPathBinaryMatrix() {
    ShortestPathBinaryMatrix::Solution solution;
    
    // Test case 1: grid = [[0,1],[1,0]] -> 2
    vector<vector<int>> grid1 = {{0, 1}, {1, 0}};
    int result1 = solution.shortestPathBinaryMatrix(grid1);
    assert(result1 == 2);
    std::cout << "Test 1 PASSED: [[0,1],[1,0]] -> " << result1 << std::endl;
    
    // Test case 2: grid = [[0,0,0],[1,1,0],[1,1,0]] -> 4
    vector<vector<int>> grid2 = {{0, 0, 0}, {1, 1, 0}, {1, 1, 0}};
    int result2 = solution.shortestPathBinaryMatrix(grid2);
    assert(result2 == 4);
    std::cout << "Test 2 PASSED: [[0,0,0],[1,1,0],[1,1,0]] -> " << result2 << std::endl;
    
    // Test case 3: grid = [[1,0,0],[1,1,0],[1,1,0]] -> -1
    vector<vector<int>> grid3 = {{1, 0, 0}, {1, 1, 0}, {1, 1, 0}};
    int result3 = solution.shortestPathBinaryMatrix(grid3);
    assert(result3 == -1);
    std::cout << "Test 3 PASSED: [[1,0,0],[1,1,0],[1,1,0]] -> " << result3 << std::endl;
}

int main() {
    try {
        testShortestPathBinaryMatrix();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
