// in this library the function visits from start to end 
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Nqueens{
    public:
    bool isSafe(vector<string> &board,int row,int col,int n){
        // horizontal
        for(int j=0;j<n;j++){
            if(board[row][j] == 'Q'){
                return false;
            }
        }
        for(int i=0;i<n;i++){
            if(board[i][col] == 'Q'){
                return false;
            }
        }
        for(int i=row , j=col ; i >=0 && j >= 0 ; i--,j--){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        for(int i=row , j=col ; i >=0 && j <n ; i--,j++){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        return true;
    }
    void helper(vector<string> &board, int row, int n,vector<vector<string>> &ans){
        if(row == n){
            ans.push_back(board);
            return ;
        }
        for(int i=0;i<n;i++){
            if(isSafe(board,row,i,n)){
                board[row][i] = 'Q';
                helper(board,row+1,n,ans);
            board[row][i] ='.';
            }
        }

    }
    vector<vector<string>> solutions(int n){
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        helper(board,0,n,ans);
        return ans;

    }

};

class Sudoku{
    public:
    bool isSafe(vector<vector<char>> &mat,int row,int col,char ch){
        for(int j=0;j<9;j++){
            if(mat[row][j] == ch){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(mat[i][col] == ch){
                return false;
            }
        }
        int st_row=(row/3)*3;
        int st_col=(col/3)*3;
        for(int i =st_row; i<st_row+3; i++){
            for(int j=st_col; j<st_col+3; j++){
                if(mat[i][j] == ch){
                    return false;
                }
            }
        }
        return true;
    }
    bool solution(vector<vector<char>> &mat,int row,int col){
        if(row == 9){
            return true;
        }
        int n_row = row;
        int n_col = col+1;
        if(n_col == 9){
            n_row = row + 1;
            n_col = 0;
        }
        if(mat[row][col] != '.'){
            return solution(mat,n_row,n_col);
        }
        for(char dig = '1'; dig <='9' ; dig++){
            if(isSafe(mat,row,col,dig)){
                mat[row][col] = dig;
                if(solution(mat,n_row,n_col)){
                    return true;
                }
            }
            mat[row][col] = '.';
        }
        return false;
    }
};
int main(){
    // Sudoku s;
    // vector<vector<char>> board={{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
    // s.solution(board,0,0);
    // for(int i=0;i<9;i++){
    //     for(int j=0;j<9;j++){
    //         cout<<board[i][j]<<" ";
    //     }
    //     cout<<endl;
    //}
    vector<int> a={2,62,1,0};
    sort(a.begin(),a.end());

    return 0;
}