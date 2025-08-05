#include<iostream>
#include<string>
#include<vector>
using namespace std;
class solution{
    public:
    bool isSafe(vector<vector<char>> &board, int row,int col,char dig){
        // horizontal 
        for(int j=0;j<9;j++){
            if(board[row][j] == dig){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(board[i][col] == dig){
                return false;
            }
        }
        int st_row = (row/3)*3;
        int st_col = (col/3)*3;
        for(int i=st_row; i<st_row+3; i++){
            for(int j=st_col; j<st_col+3; j++){
                if(board[i][j] == dig){
                    return false;
                }
            }
        }
        return true;
    }
    bool helper(vector<vector<char>> &board,int row,int col){
        if(row==9){
            return true ;
        }
        int next_row=row;
        int next_col=col+1;
        if(col==9){
            next_row=row+1;
            next_col=0;
        }
        if(board[row][col] != '.'){
            return helper(board,next_row,next_col);
        }
        for(char dig='1'; dig<='9'; dig++){
            if(isSafe(board,row,col,dig)){
                board[row][col] = dig;
                if(helper(board,next_row,next_col)){
                    return true;
                };
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solve(vector<vector<char>> &board){
         helper(board,0,0);
    }

};
int main(){
    vector<vector<char>> board={{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
    solution myObj;
    myObj.solve(board);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}