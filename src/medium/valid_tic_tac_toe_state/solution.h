/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Valid Tic-Tac-Toe State
 * Reference : https://leetcode.com/problems/valid-tic-tac-toe-state/
 */

#ifndef VALID_TIC_TAC_TOE_STATE_SOLUTION_H
#define VALID_TIC_TAC_TOE_STATE_SOLUTION_H

#include <vector>
#include <string>

namespace ValidTicTacToeState {
class Solution {
public:
    /**
     * @brief Check if the given board state is valid for a tic-tac-toe game
     * 
     * A valid tic-tac-toe state must satisfy:
     * 1. The number of 'X' is either equal to or one more than the number of 'O'
     * 2. If 'X' wins, then the number of 'X' must be one more than 'O'
     * 3. If 'O' wins, then the number of 'X' must equal the number of 'O'
     * 4. Only one player can win (not both)
     * 
     * @param board The 3x3 tic-tac-toe board represented as a vector of strings
     * @return true if the board state is valid, false otherwise
     */
    bool validTicTacToe(std::vector<std::string>& board);
    
    /**
     * @brief Second implementation using a more compact approach
     * @param board The 3x3 tic-tac-toe board represented as a vector of strings
     * @return true if the board state is valid, false otherwise
     */
    bool validTicTacToeCompact(std::vector<std::string>& board);
    
private:
    /**
     * @brief Count the number of occurrences of a character on the board
     * @param board The board
     * @param c The character to count ('X' or 'O')
     * @return The count of the character
     */
    int countChar(const std::vector<std::string>& board, char c);
    
    /**
     * @brief Check if a player has won the game
     * @param board The board
     * @param c The player character ('X' or 'O')
     * @return true if the player has won, false otherwise
     */
    bool hasWon(const std::vector<std::string>& board, char c);
    
    /**
     * @brief Check if a player has won the game (compact version)
     * @param board The board
     * @param c The player character ('X' or 'O')
     * @return true if the player has won, false otherwise
     */
    bool win(std::vector<std::string>& board, char c);
};

} // namespace ValidTicTacToeState

#endif // VALID_TIC_TAC_TOE_STATE_SOLUTION_H

