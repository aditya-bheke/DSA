#include<bits/stdc++.h>
using namespace std;

bool isOkay(vector<vector<int>>&grid,int row,int col,int num,int n){
    if(row<0 || col<0 || row>=n || col>=n || grid[row][col]!=num){
        return false;
    }
    if(num==n*n-1){
        return true;
    }

    
    int ans1=isOkay(grid,row-2,col+1,num+1,n);
    int ans2=isOkay(grid,row-1,col+2,num+1,n);
    int ans3=isOkay(grid,row+1,col+2,num+1,n);
    int ans4=isOkay(grid,row+2,col+1,num+1,n);
    int ans5=isOkay(grid,row+2,col-1,num+1,n);
    int ans6=isOkay(grid,row+1,col-2,num+1,n);
    int ans7=isOkay(grid,row-1,col-2,num+1,n);
    int ans8=isOkay(grid,row-2,col-1,num+1,n);

    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8; 
}

int main(){
    vector<vector<int>>grid = {{0, 11, 16, 5, 20}, {17, 4, 19, 10, 15}, {12, 1, 8, 21, 6}, {3, 18, 23, 14, 9}, {24, 13, 2, 7, 22}};

    int n = grid.size();
    cout<<isOkay(grid,0,0,0,n);
    return 0;
}