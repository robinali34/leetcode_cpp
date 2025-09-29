/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_minesweeper.cpp
 * @desc : Test file for Minesweeper
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/minesweeper/solution.h"
#include "../../src/medium/minesweeper/solution.cpp"

void testMinesweeper() {
    Minesweeper::Solution solution;
    
    // Test case 1: board = [["E","E","E","E","E"],["E","E","M","E","E"],["E","E","E","E","E"],["E","E","E","E","E"]], click = [3,0]
    vector<vector<char>> board1 = {{'E','E','E','E','E'}, {'E','E','M','E','E'}, {'E','E','E','E','E'}, {'E','E','E','E','E'}};
    vector<int> click1 = {3, 0};
    vector<vector<char>> result1 = solution.updateBoard(board1, click1);
    // Expected: [["B","1","E","1","B"],["B","1","M","1","B"],["B","1","1","1","B"],["B","B","B","B","B"]]
    assert(result1[0][0] == 'B');
    assert(result1[0][1] == '1');
    std::cout << "Test 1 PASSED: Minesweeper reveal" << std::endl;
    
    // Test case 2: board = [["B","1","E","1","B"],["B","1","M","1","B"],["B","1","1","1","B"],["B","B","B","B","B"]], click = [1,2]
    vector<vector<char>> board2 = {{'B','1','E','1','B'}, {'B','1','M','1','B'}, {'B','1','1','1','B'}, {'B','B','B','B','B'}};
    vector<int> click2 = {1, 2};
    vector<vector<char>> result2 = solution.updateBoard(board2, click2);
    // Expected: [["B","1","X","1","B"],["B","1","M","1","B"],["B","1","1","1","B"],["B","B","B","B","B"]]
    assert(result2[1][2] == 'X');
    std::cout << "Test 2 PASSED: Minesweeper mine hit" << std::endl;
}

int main() {
    try {
        testMinesweeper();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
