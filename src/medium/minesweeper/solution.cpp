/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Minesweeper
 * Reference : https://leetcode.com/problems/minesweeper/
 */

#include "solution.h"

using namespace std;

namespace Minesweeper {

vector<vector<char>> Solution::updateBoard(vector<vector<char>>& board, vector<int>& click) {
    const int row = click[0], col = click[1];
    if (board[row][col] == 'M') board[row][col] = 'X';
    else reveal (row, col, board);
    return board;
}

void Solution::reveal(int i, int j, vector<vector<char>>& board) {
    if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'E') return;
    int num = numbermines(i, j, board, 0);
    if (num > 0) {
        board[i][j] = num + '0';
    } else {
        board[i][j] = 'B';
        reveal(i + 1, j, board);
        reveal(i + 1, j + 1, board);
        reveal(i + 1, j - 1, board);
        reveal(i, j + 1, board);
        reveal(i, j - 1, board);
        reveal(i - 1, j, board);
        reveal(i - 1, j + 1, board);
        reveal(i - 1, j - 1, board);
    }
}

int Solution::numbermines(int i, int j, vector<vector<char>>& board, int c) {
    if(i + 1 < board.size() && board[i + 1][j] == 'M') c++;
    if(i + 1 < board.size() && j + 1 < board[0].size() && board[i + 1][j + 1] == 'M') c++;
    if(i + 1 < board.size() && j - 1 >= 0 && board[i + 1][j - 1] == 'M') c++;
    if(j + 1 < board[0].size() && board[i][j + 1] == 'M') c++;
    if(j - 1 >= 0 && board[i][j - 1] == 'M') c++;
    if(i - 1 >= 0 && board[i - 1][j] == 'M') c++;
    if(i - 1 >= 0 && j + 1 < board[0].size() && board[i - 1][j + 1] == 'M') c++;
    if(i - 1 >= 0 && j - 1 >= 0 && board[i - 1][j - 1] == 'M') c++;
    return c;
}

}
