/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Valid Sudoku
 * Reference : https://leetcode.com/problems/valid-sudoku/
 */

#include "solution.h"

using namespace std;

namespace ValidSudoku {

bool Solution::isValidSudoku(vector<vector<char>>& board) {
    // Check rows
    for (int i = 0; i < 9; i++) {
        vector<bool> seen(9, false);
        for (int j = 0; j < 9; j++) {
            if (board[i][j] != '.') {
                int num = board[i][j] - '1';
                if (seen[num]) return false;
                seen[num] = true;
            }
        }
    }
    
    // Check columns
    for (int j = 0; j < 9; j++) {
        vector<bool> seen(9, false);
        for (int i = 0; i < 9; i++) {
            if (board[i][j] != '.') {
                int num = board[i][j] - '1';
                if (seen[num]) return false;
                seen[num] = true;
            }
        }
    }
    
    // Check 3x3 sub-boxes
    for (int box = 0; box < 9; box++) {
        vector<bool> seen(9, false);
        int startRow = (box / 3) * 3;
        int startCol = (box % 3) * 3;
        
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '1';
                    if (seen[num]) return false;
                    seen[num] = true;
                }
            }
        }
    }
    
    return true;
}

}
