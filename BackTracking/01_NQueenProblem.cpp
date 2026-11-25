// here we are given an integer N and nothing else, N means a N * N board where we have to place N queens

// we have to create a N * N matrix of string, and place "Q" in that matrix to the position where queen can be placed
// and fill up remaining places with "."

// for output, whole matrix to be stored in vector<vector<string>>

#include <bits/stdc++.h>
using namespace std;
bool isSafe(int row, int col, vector<string> &board, int n) {   // to check whether queen can be placed at that position
    int rowTemp = row, colTemp = col;
    while(row >= 0 && col >= 0) {  // to check left upper diagonal positions
        if(board[row][col] == 'Q') {
            return false;
        }
        row--;
        col--;
    }
    row = rowTemp, col = colTemp;
    while(col >= 0) {  // to check left horizontal positons
        if(board[row][col] == 'Q') {
            return false;
        }
        col--;
    }
    row = rowTemp, col = colTemp;
    while(row <= n - 1 && col >= 0) {  // to check left upper diagonal positions
        if(board[row][col] == 'Q') {
            return false;
        }
        row++;
        col++;
    }
    return true;
}
void NQueens(int col, vector<string> &board, vector<vector<string>> &ans, int n) {
    if(col == n) {
        ans.emplace_back(board);
        return;
    }
    for(int row = 0; row <= n - 1; row++) {  // this for loop runs on every call, so O(n ^ 2)
        if(isSafe(row, col, board, n) == true) {
            board[row][col] = 'Q';
            NQueens(col + 1, board, ans, n);
            board[row][col] = '.';  
        }
    }
}
int main() {
    int n = 4;
    vector<string> board(n);
    string s(n, '.');
    vector<vector<string>> ans;
    NQueens(0, board, ans, n);
    return 0;
}

// Time Complexity = O(3n){to check whether Q can be placed by check 3 size positions inside isSafe()} + O(n ^ 2) = O(n ^ 2)
// Space Complexity = O(n ^ 2){auxillary space}