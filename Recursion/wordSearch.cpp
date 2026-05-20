#include<bits/stdc++.h>
using namespace std;

/*
    Function: isValid

    Purpose:
    Checks whether given word
    can be formed starting from
    current cell.

    Parameters:
    board -> character grid
    word  -> target word
    row,col -> current position
    index -> current character index
*/
bool isValid(vector<vector<char>> &board,
             string word,
             int row,
             int col,
             int index){

    int rows = board.size();
    int cols = board[0].size();

    /*
        Base Case:

        If entire word matched,
        return true
    */
    if(index == word.size()){
        return true;
    }

    /*
        Invalid Conditions:

        1. Out of bounds
        2. Character mismatch
    */
    if(row < 0 || col < 0 ||
       row >= rows || col >= cols ||
       board[row][col] != word[index]){

        return false;
    }

    /*
        Store current character
    */
    char temp = board[row][col];

    /*
        Mark current cell visited

        Why?
        Same cell cannot be reused
        in same path.
    */
    board[row][col] = '#';

    /*
        Explore all 4 directions
    */
    bool found =

    isValid(board,word,row+1,col,index+1) ||
    isValid(board,word,row-1,col,index+1) ||
    isValid(board,word,row,col+1,index+1) ||
    isValid(board,word,row,col-1,index+1);

    /*
        BACKTRACKING STEP

        Restore original character
        for future paths.
    */
    board[row][col] = temp;

    return found;
}

int main(){

    vector<vector<char>> board = {

        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };

    string word = "ABCCED";

    int rows = board.size();
    int cols = board[0].size();

    /*
        Stores whether
        word found or not
    */
    bool found = false;

    /*
        IMPORTANT:

        Try every cell
        as starting point.

        Because:
        word may start
        from ANY position.
    */
    for(int i = 0; i < rows; i++){

        for(int j = 0; j < cols; j++){

            /*
                Start recursion
                from current cell
            */
            if(isValid(board,word,i,j,0)){

                found = true;
                break;
            }
        }

        /*
            Break outer loop also
        */
        if(found){
            break;
        }
    }

    /*
        Final answer
    */
    if(found){
        cout << "Done";
    }

    else{
        cout << "Wrong";
    }

    return 0;
}