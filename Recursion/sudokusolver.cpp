#include <bits/stdc++.h>
using namespace std;

/*
    Function: isOkay

    Purpose:
    Checks whether placing digit 'ch'
    at position (row, col) is valid or not.

    Sudoku Rules:
    1. Same number should not exist in current row
    2. Same number should not exist in current column
    3. Same number should not exist in current 3x3 grid
*/
bool isOkay(vector<vector<char>>& board,
            int row,
            int col,
            char ch) {

    // Check current row
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == ch) {
            return false;
        }
    }

    // Check current column
    for (int i = 0; i < 9; i++) {
        if (board[i][col] == ch) {
            return false;
        }
    }

    /*
        Find starting point of 3x3 subgrid

        Example:
        row = 5, col = 7

        stRow = (5/3)*3 = 3
        stCol = (7/3)*3 = 6

        So subgrid starts from:
        (3,6)
    */
    int stRow = (row / 3) * 3;
    int stCol = (col / 3) * 3;

    // Check 3x3 subgrid
    for (int i = stRow; i < stRow + 3; i++) {
        for (int j = stCol; j < stCol + 3; j++) {

            if (board[i][j] == ch) {
                return false;
            }
        }
    }

    // Safe placement
    return true;
}

/*
    Function: sudokuSolve

    Purpose:
    Solves Sudoku using Recursion + Backtracking

    Parameters:
    board -> sudoku board
    row   -> current row
    col   -> current column
*/
bool sudokuSolve(vector<vector<char>>& board,
                 int row,
                 int col) {

    /*
        If column becomes 9,
        move to next row
    */
    if (col == 9) {
        col = 0;
        row++;
    }

    /*
        Base Case:
        If row becomes 9,
        sudoku is solved
    */
    if (row == 9) {
        return true;
    }

    /*
        If current cell already has number,
        move to next cell
    */
    if (board[row][col] != '.') {
        return sudokuSolve(board, row, col + 1);
    }

    /*
        Try digits 1 to 9
    */
    for (char ch = '1'; ch <= '9'; ch++) {

        // Check whether placement is valid
        if (isOkay(board, row, col, ch)) {

            // Place digit
            board[row][col] = ch;

            /*
                Recur for next cell

                If solution found,
                immediately return true
            */
            if (sudokuSolve(board, row, col + 1)) {
                return true;
            }

            /*
                Backtracking:
                Remove digit if future fails
            */
            board[row][col] = '.';
        }
    }

    /*
        No digit worked
    */
    return false;
}

int main() {

    // Sudoku board
    vector<vector<char>> board = {

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

    // Solve sudoku
    sudokuSolve(board, 0, 0);

    // Print solved board
    cout << "{" << endl;

    for (int i = 0; i < 9; i++) {

        cout << "{ ";

        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }

        cout << "}," << endl;
    }

    cout << "}";

    return 0;
}