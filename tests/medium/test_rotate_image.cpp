/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_rotate_image.cpp
 * @desc : Test file for Rotate Image
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/rotate_image/solution.h"
#include "../../src/medium/rotate_image/solution.cpp"

void testRotateImage() {
    RotateImage::Solution solution;
    
    // Test case 1: matrix = [[1,2,3],[4,5,6],[7,8,9]] -> [[7,4,1],[8,5,2],[9,6,3]]
    vector<vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    solution.rotate(matrix1);
    vector<vector<int>> expected1 = {{7, 4, 1}, {8, 5, 2}, {9, 6, 3}};
    assert(matrix1 == expected1);
    std::cout << "Test 1 PASSED: 3x3 matrix rotation" << std::endl;
    
    // Test case 2: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]] -> [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
    vector<vector<int>> matrix2 = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    solution.rotate(matrix2);
    vector<vector<int>> expected2 = {{15, 13, 2, 5}, {14, 3, 4, 1}, {12, 6, 8, 9}, {16, 7, 10, 11}};
    assert(matrix2 == expected2);
    std::cout << "Test 2 PASSED: 4x4 matrix rotation" << std::endl;
    
    // Test case 3: matrix = [[1]] -> [[1]]
    vector<vector<int>> matrix3 = {{1}};
    solution.rotate(matrix3);
    vector<vector<int>> expected3 = {{1}};
    assert(matrix3 == expected3);
    std::cout << "Test 3 PASSED: 1x1 matrix rotation" << std::endl;
}

int main() {
    try {
        testRotateImage();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
