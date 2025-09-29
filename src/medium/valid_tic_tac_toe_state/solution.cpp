/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Valid Tic-Tac-Toe State
 * Reference : https://leetcode.com/problems/valid-tic-tac-toe-state/
 */

#include "solution.h"

namespace ValidTicTacToeState {

// First implementation using helper methods
bool Solution::validTicTacToe(std::vector<std::string>& board) {
    int countX = countChar(board, 'X');
    int countO = countChar(board, 'O');
    
    // Rule 1: X count must be equal to or one more than O count
    if (countX != countO && countX != countO + 1) {
        return false;
    }
    
    bool xWins = hasWon(board, 'X');
    bool oWins = hasWon(board, 'O');
    
    // Rule 2: Both players cannot win
    if (xWins && oWins) {
        return false;
    }
    
    // Rule 3: If X wins, X count must be one more than O count
    if (xWins && countX != countO + 1) {
        return false;
    }
    
    // Rule 4: If O wins, X count must equal O count
    if (oWins && countX != countO) {
        return false;
    }
    
    return true;
}

// Second implementation using compact approach
bool Solution::validTicTacToeCompact(std::vector<std::string>& board) {
    int x_cnt = 0, o_cnt = 0;
    for (int i = 0; i < board.size(); i++) {
        for (auto& c : board[i]) {
            if (c == 'X') x_cnt++;
            if (c == 'O') o_cnt++;
        }
    }
    if (x_cnt != o_cnt + 1 && x_cnt != o_cnt) return false;
    bool x_win = this->win(board, 'X');
    bool o_win = this->win(board, 'O'); 
    if (x_win && o_cnt + 1 != x_cnt) return false;
    if (o_win && o_cnt != x_cnt) return false;
    if (x_win && o_win) return false;
    return true; 
}

int Solution::countChar(const std::vector<std::string>& board, char c) {
    int count = 0;
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == c) {
                count++;
            }
        }
    }
    return count;
}

bool Solution::hasWon(const std::vector<std::string>& board, char c) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == c && board[i][1] == c && board[i][2] == c) {
            return true;
        }
    }
    
    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == c && board[1][j] == c && board[2][j] == c) {
            return true;
        }
    }
    
    // Check diagonals
    if (board[0][0] == c && board[1][1] == c && board[2][2] == c) {
        return true;
    }
    if (board[0][2] == c && board[1][1] == c && board[2][0] == c) {
        return true;
    }
    
    return false;
}

bool Solution::win(std::vector<std::string>& board, char P) {
    int n = board.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < n; j++) {
            if(board[i][j] == P) cnt++;
        }
        if (cnt == n) return true;
        
        cnt = 0;
        for (int j = 0; j < n; j++) {
            if(board[j][i] == P) cnt++;
        }
        if (cnt == n) return true;
    }

    cnt = 0;
    for (int i = 0; i < n; i++) {
        if(board[i][i] == P) cnt++;
    }
    if (cnt == n) return true;

    cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        if(board[i][n - i - 1] == P) cnt++;
    }
    if (cnt == n) return true;
    return false;
}

} // namespace ValidTicTacToeState

