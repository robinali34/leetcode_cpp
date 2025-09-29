#include <cassert>
#include <vector>
#include <iostream>
#include "../../src/medium/valid_sudoku/solution.h"
#include "../../src/medium/valid_sudoku/solution.cpp"

using namespace std;

void test_valid_sudoku() {
    ValidSudoku::Solution solution;
    
    // Test case 1: Valid Sudoku
    vector<vector<char>> board1 = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    assert(solution.isValidSudoku(board1) == true);
    
    // Test case 2: Invalid Sudoku (duplicate in row)
    vector<vector<char>> board2 = {
        {'8','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    assert(solution.isValidSudoku(board2) == false);
    
    // Test case 3: Invalid Sudoku (duplicate in column)
    vector<vector<char>> board3 = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'5','.','.','.','8','.','.','7','9'}
    };
    assert(solution.isValidSudoku(board3) == false);
    
    // Test case 4: Invalid Sudoku (duplicate in 3x3 box)
    vector<vector<char>> board4 = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    // Modify to create duplicate in first 3x3 box
    board4[0][0] = '6';
    assert(solution.isValidSudoku(board4) == false);
    
    // Test case 5: Empty board (valid)
    vector<vector<char>> board5(9, vector<char>(9, '.'));
    assert(solution.isValidSudoku(board5) == true);
    
    cout << "All valid_sudoku tests passed!" << endl;
}

int main() {
    test_valid_sudoku();
    return 0;
}
