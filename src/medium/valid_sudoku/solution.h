/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Valid Sudoku
 * Reference : https://leetcode.com/problems/valid-sudoku/
 */

#ifndef VALID_SUDOKU_SOLUTION_H
#define VALID_SUDOKU_SOLUTION_H

#include <vector>
#include <string>

using namespace std;

namespace ValidSudoku {
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board);
};
}

#endif // VALID_SUDOKU_SOLUTION_H
