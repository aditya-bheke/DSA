#include <bits/stdc++.h>
using namespace std;

/*
    Function: isSafe
    Purpose:
    Checks whether placing a Queen at (row, col) is valid or not.

    Conditions for a safe placement:
    1. No Queen should exist in the same row
    2. No Queen should exist in the same column
    3. No Queen should exist in left upper diagonal
    4. No Queen should exist in right upper diagonal
*/
bool isSafe(vector<string>& board, int row, int col, int n) {

    // Check entire row
    for (int j = 0; j < n; j++) {
        if (board[row][j] == 'Q') {
            return false;
        }
    }

    // Check entire column
    for (int i = 0; i < n; i++) {
        if (board[i][col] == 'Q') {
            return false;
        }
    }

    // Check left upper diagonal
    // Example movement:
    // (3,3) -> (2,2) -> (1,1)
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    // Check right upper diagonal
    // Example movement:
    // (3,1) -> (2,2) -> (1,3)
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    // If all checks passed, position is safe
    return true;
}

/*
    Function: nQueens
    Purpose:
    Uses Backtracking + Recursion to place Queens row by row.

    Parameters:
    board -> current chess board
    row   -> current row where we want to place Queen
    n     -> board size
    ans   -> stores all valid solutions
*/
void nQueens(vector<string>& board,
             int row,
             int n,
             vector<vector<string>>& ans) {

    /*
        Base Case:
        If row == n
        means all queens are successfully placed
    */
    if (row == n) {
        ans.push_back(board);
        return;
    }

    /*
        Try placing Queen in every column
        of the current row
    */
    for (int j = 0; j < n; j++) {

        // Check if current position is safe
        if (isSafe(board, row, j, n)) {

            // Place Queen
            board[row][j] = 'Q';

            // Recur for next row
            nQueens(board, row + 1, n, ans);

            /*
                Backtracking step:
                Remove Queen so that
                other possibilities can be explored
            */
            board[row][j] = '.';
        }
    }
}

int main() {

    // Size of board
    int n = 4;

    // Stores all solutions
    vector<vector<string>> ans;

    /*
        Create empty board

        Example for n=4:
        ....
        ....
        ....
        ....
    */
    vector<string> board(n, string(n, '.'));

    // Start solving from row 0
    nQueens(board, 0, n, ans);

    // Print all solutions
    for (int i = 0; i < ans.size(); i++) {

        cout << "Solution " << i + 1 << ":" << endl;

        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << endl;
        }

        cout << endl;
    }

    return 0;
}