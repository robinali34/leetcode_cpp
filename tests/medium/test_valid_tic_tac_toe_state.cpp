/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_valid_tic_tac_toe_state.cpp
 * @desc : Test file for Valid Tic-Tac-Toe State
 */

#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "../../src/medium/valid_tic_tac_toe_state/solution.h"
#include "../../src/medium/valid_tic_tac_toe_state/solution.cpp"

void testValidTicTacToeState() {
    std::cout << "Testing Valid Tic-Tac-Toe State..." << std::endl;
    
    ValidTicTacToeState::Solution solution;
    
    // Test case 1: Valid game in progress
    std::vector<std::string> board1 = {"X  ", "   ", "   "};
    assert(solution.validTicTacToe(board1) == true);
    assert(solution.validTicTacToeCompact(board1) == true);
    std::cout << "Test 1 PASSED: Valid game in progress" << std::endl;
    
    // Test case 2: Valid game with X winning
    std::vector<std::string> board2 = {"XXX", "OO ", "   "};
    assert(solution.validTicTacToe(board2) == true);
    assert(solution.validTicTacToeCompact(board2) == true);
    std::cout << "Test 2 PASSED: Valid game with X winning" << std::endl;
    
    // Test case 3: Valid game with O winning
    std::vector<std::string> board3 = {"XOX", "O O", "XOX"};
    assert(solution.validTicTacToe(board3) == true);
    assert(solution.validTicTacToeCompact(board3) == true);
    std::cout << "Test 3 PASSED: Valid game with O winning" << std::endl;
    
    // Test case 4: Invalid - too many X's
    std::vector<std::string> board4 = {"XOX", " X ", "   "};
    board4[2][2] = 'X'; // Add extra X
    assert(solution.validTicTacToe(board4) == false);
    assert(solution.validTicTacToeCompact(board4) == false);
    std::cout << "Test 4 PASSED: Invalid - too many X's" << std::endl;
    
    // Test case 5: Invalid - too many O's
    std::vector<std::string> board5 = {"XOX", "O O", "XOX"};
    board5[2][2] = 'O'; // Change X to O
    assert(solution.validTicTacToe(board5) == false);
    assert(solution.validTicTacToeCompact(board5) == false);
    std::cout << "Test 5 PASSED: Invalid - too many O's" << std::endl;
    
    // Test case 6: Invalid - both players win
    std::vector<std::string> board6 = {"XXX", "OOO", "   "};
    assert(solution.validTicTacToe(board6) == false);
    assert(solution.validTicTacToeCompact(board6) == false);
    std::cout << "Test 6 PASSED: Invalid - both players win" << std::endl;
    
    // Test case 7: Valid - empty board
    std::vector<std::string> board7 = {"   ", "   ", "   "};
    assert(solution.validTicTacToe(board7) == true);
    assert(solution.validTicTacToeCompact(board7) == true);
    std::cout << "Test 7 PASSED: Valid - empty board" << std::endl;
    
    // Test case 8: Valid - X wins with correct count
    std::vector<std::string> board8 = {"XXX", "OO ", "   "};
    assert(solution.validTicTacToe(board8) == true);
    assert(solution.validTicTacToeCompact(board8) == true);
    std::cout << "Test 8 PASSED: Valid - X wins with correct count" << std::endl;
    
    // Test case 9: Valid - O wins with correct count
    std::vector<std::string> board9 = {"XOX", "O O", "XOX"};
    assert(solution.validTicTacToe(board9) == true);
    assert(solution.validTicTacToeCompact(board9) == true);
    std::cout << "Test 9 PASSED: Valid - O wins with correct count" << std::endl;
    
    // Test case 10: Invalid - X wins but wrong count
    std::vector<std::string> board10 = {"XXX", "   ", "   "};
    board10[1][0] = 'O'; // Add O
    assert(solution.validTicTacToe(board10) == false);
    assert(solution.validTicTacToeCompact(board10) == false);
    std::cout << "Test 10 PASSED: Invalid - X wins but wrong count" << std::endl;
    
    // Test case 11: Valid - no winner with equal counts
    std::vector<std::string> board11 = {"XOX", "O O", "XOX"};
    board11[2][2] = 'X'; // Change O to X
    assert(solution.validTicTacToe(board11) == true);
    assert(solution.validTicTacToeCompact(board11) == true);
    std::cout << "Test 11 PASSED: Valid - no winner with equal counts" << std::endl;
    
    // Test case 12: Valid - diagonal win for X
    std::vector<std::string> board12 = {"X  ", " X ", "OOX"};
    assert(solution.validTicTacToe(board12) == true);
    assert(solution.validTicTacToeCompact(board12) == true);
    std::cout << "Test 12 PASSED: Valid - diagonal win for X" << std::endl;
    
    // Test case 13: Valid - anti-diagonal win for O
    std::vector<std::string> board13 = {"X O", "XO ", "OX "};
    assert(solution.validTicTacToe(board13) == true);
    assert(solution.validTicTacToeCompact(board13) == true);
    std::cout << "Test 13 PASSED: Valid - anti-diagonal win for O" << std::endl;
    
    // Test case 14: Valid - column win for X
    std::vector<std::string> board14 = {"X  ", "X  ", "XOO"};
    assert(solution.validTicTacToe(board14) == true);
    assert(solution.validTicTacToeCompact(board14) == true);
    std::cout << "Test 14 PASSED: Valid - column win for X" << std::endl;
    
    // Test case 15: Valid - row win for O
    std::vector<std::string> board15 = {"OOO", "XX ", "X  "};
    assert(solution.validTicTacToe(board15) == true);
    assert(solution.validTicTacToeCompact(board15) == true);
    std::cout << "Test 15 PASSED: Valid - row win for O" << std::endl;
    
    // Test case 16: Invalid - impossible state (X has 2 more than O)
    std::vector<std::string> board16 = {"XX ", "   ", "   "};
    assert(solution.validTicTacToe(board16) == false);
    assert(solution.validTicTacToeCompact(board16) == false);
    std::cout << "Test 16 PASSED: Invalid - impossible state" << std::endl;
    
    // Test case 17: Valid - game in progress with equal counts
    std::vector<std::string> board17 = {"XO ", "   ", "   "};
    assert(solution.validTicTacToe(board17) == true);
    assert(solution.validTicTacToeCompact(board17) == true);
    std::cout << "Test 17 PASSED: Valid - game in progress with equal counts" << std::endl;
    
    // Test case 18: Valid - game in progress with X one ahead
    std::vector<std::string> board18 = {"XO ", "X  ", "   "};
    assert(solution.validTicTacToe(board18) == true);
    assert(solution.validTicTacToeCompact(board18) == true);
    std::cout << "Test 18 PASSED: Valid - game in progress with X one ahead" << std::endl;
    
    // Test case 19: Invalid - O has more than X
    std::vector<std::string> board19 = {"O  ", "O  ", "   "};
    assert(solution.validTicTacToe(board19) == false);
    assert(solution.validTicTacToeCompact(board19) == false);
    std::cout << "Test 19 PASSED: Invalid - O has more than X" << std::endl;
    
    // Test case 20: Valid - full board with no winner
    std::vector<std::string> board20 = {"XOX", "OXO", "XOX"};
    assert(solution.validTicTacToe(board20) == true);
    assert(solution.validTicTacToeCompact(board20) == true);
    std::cout << "Test 20 PASSED: Valid - full board with no winner" << std::endl;
}

void testEdgeCases() {
    std::cout << "\nTesting Edge Cases..." << std::endl;
    
    ValidTicTacToeState::Solution solution;
    
    // Test case 1: Single move by X
    std::vector<std::string> board1 = {"X  ", "   ", "   "};
    assert(solution.validTicTacToe(board1) == true);
    assert(solution.validTicTacToeCompact(board1) == true);
    std::cout << "Test 1 PASSED: Single move by X" << std::endl;
    
    // Test case 2: Single move by O (invalid - O cannot start)
    std::vector<std::string> board2 = {"O  ", "   ", "   "};
    assert(solution.validTicTacToe(board2) == false);
    assert(solution.validTicTacToeCompact(board2) == false);
    std::cout << "Test 2 PASSED: Single move by O (invalid)" << std::endl;
    
    // Test case 3: Two moves - X then O
    std::vector<std::string> board3 = {"XO ", "   ", "   "};
    assert(solution.validTicTacToe(board3) == true);
    assert(solution.validTicTacToeCompact(board3) == true);
    std::cout << "Test 3 PASSED: Two moves - X then O" << std::endl;
    
    // Test case 4: Two moves - O then X (valid)
    std::vector<std::string> board4 = {"OX ", "   ", "   "};
    assert(solution.validTicTacToe(board4) == true);
    assert(solution.validTicTacToeCompact(board4) == true);
    std::cout << "Test 4 PASSED: Two moves - O then X (valid)" << std::endl;
    
    // Test case 5: Three moves - X, O, X
    std::vector<std::string> board5 = {"XO ", "X  ", "   "};
    assert(solution.validTicTacToe(board5) == true);
    assert(solution.validTicTacToeCompact(board5) == true);
    std::cout << "Test 5 PASSED: Three moves - X, O, X" << std::endl;
    
    // Test case 6: Three moves - O, X, O (invalid)
    std::vector<std::string> board6 = {"OX ", "O  ", "   "};
    assert(solution.validTicTacToe(board6) == false);
    assert(solution.validTicTacToeCompact(board6) == false);
    std::cout << "Test 6 PASSED: Three moves - O, X, O (invalid)" << std::endl;
}

void testPerformanceComparison() {
    std::cout << "\nTesting Performance Comparison..." << std::endl;
    
    ValidTicTacToeState::Solution solution;
    
    // Test with a complex valid board
    std::vector<std::string> board1 = {"XOX", "OXO", "XOX"};
    bool result1 = solution.validTicTacToe(board1);
    bool result2 = solution.validTicTacToeCompact(board1);
    
    assert(result1 == result2);
    assert(result1 == true);
    std::cout << "Test 1 PASSED: Complex valid board - both methods agree" << std::endl;
    
    // Test with an invalid board
    std::vector<std::string> board2 = {"XXX", "OOO", "   "};
    bool result3 = solution.validTicTacToe(board2);
    bool result4 = solution.validTicTacToeCompact(board2);
    
    assert(result3 == result4);
    assert(result3 == false);
    std::cout << "Test 2 PASSED: Invalid board - both methods agree" << std::endl;
}

int main() {
    try {
        testValidTicTacToeState();
        testEdgeCases();
        testPerformanceComparison();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}