#include<iostream>
#include<string>
#include<vector>
using namespace std;
class solution{
    public:
    bool isSafe(vector<vector<char>> board,int row,int col,char digit){
        //horizontal
        for(int j=0;j<9;j++){
            if(board[row][j] == digit){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(board[i][col] == digit){
                return false;
            }
        }
        int c_row=(row/3)*3;
        int c_col=(col/3)*3;
        for(int i=row;i<=row+2;i++){
            for(int j=col;j<=col+2;j++){
                if(board[i][j] == digit){
                    return false;
                }
            }
        }

    }
    bool helper(vector<vector<char>> &board,int row,int col){
        if(row == 9){
            return true;
        }
        int next_row=row;
        int next_col=col+1;
        if(col == '9'){
            next_row=row+1;
            next_col=0;
        }
        if(board[row][col] != '.'){
            helper(board,next_row,next_col);
        }
        for(char digit='1';digit <= '9'; digit++ ){
            if(isSafe(board,row,col,digit)){
                board[row][col] = digit;
                if(helper(board,next_row,next_col)){
                    return true;
                }
                board[row][col] = '.';
            }

        }
        return false;
    }
};