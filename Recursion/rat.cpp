#include <bits/stdc++.h>
using namespace std;

/*
    Function: helper

    Purpose:
    Uses Recursion + Backtracking
    to find all possible paths
    from source (0,0) to destination (n-1,n-1)

    Allowed Moves:
    D -> Down
    U -> Up
    R -> Right
    L -> Left
*/
void helper(vector<vector<int>>& mat,
            int row,
            int col,
            vector<string>& ans,
            string path) {

    int n = mat.size();

    /*
        Invalid Conditions:

        1. Out of bounds
        2. Cell is blocked (0)
        3. Cell already visited (-1)
    */
    if (row < 0 || col < 0 ||
        row >= n || col >= n ||
        mat[row][col] == 0 ||
        mat[row][col] == -1) {

        return;
    }

    /*
        Base Case:
        Destination reached
    */
    if (row == n - 1 && col == n - 1) {

        // Store valid path
        ans.push_back(path);
        return;
    }

    /*
        Mark current cell as visited

        Why?
        To avoid infinite loops
    */
    mat[row][col] = -1;

    /*
        Explore all 4 directions
    */

    // Move Down
    helper(mat, row + 1, col, ans, path + "D");

    // Move Up
    helper(mat, row - 1, col, ans, path + "U");

    // Move Right
    helper(mat, row, col + 1, ans, path + "R");

    // Move Left
    helper(mat, row, col - 1, ans, path + "L");

    /*
        Backtracking step

        Unmark cell so that
        other paths can use it
    */
    mat[row][col] = 1;
}

/*
    Function: findPath

    Purpose:
    Initializes answer vector
    and starts recursion
*/
vector<string> findPath(vector<vector<int>>& mat) {

    int n = mat.size();

    // Stores all valid paths
    vector<string> ans;

    // Empty path initially
    string path = "";

    // Start from source cell
    helper(mat, 0, 0, ans, path);

    return ans;
}

int main() {

    /*
        Maze:

        1 -> open cell
        0 -> blocked cell
    */
    vector<vector<int>> mat = {

        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };

    // Get all paths
    vector<string> ans = findPath(mat);

    // Print paths
    for (string path : ans) {
        cout << path << endl;
    }

    return 0;
}