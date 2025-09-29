/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Minesweeper
 * Reference : https://leetcode.com/problems/minesweeper/
 */

#ifndef MINESWEEPER_SOLUTION_H
#define MINESWEEPER_SOLUTION_H

#include <vector>

using namespace std;

namespace Minesweeper {
class Solution {
public:
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click);
private:
    void reveal(int i, int j, vector<vector<char>>& board);
    int numbermines(int i, int j, vector<vector<char>>& board, int c);
};
}

#endif // MINESWEEPER_SOLUTION_H
