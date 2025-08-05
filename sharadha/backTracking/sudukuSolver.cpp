#include<iostream>
#include<vector>
using namespace std;
class sudukuSolver{
    bool isSafe(vector<vector<char>>& board,int row,int col,char num){
        for(int ch = 0; ch<9;ch++){
            if(board[row][ch] == num){
                return false;
            }
        }
        for(int ch = 0;ch<9;ch++){
            if(board[ch][col]==num){
                return false;
            }
        }
        int i=row/3*3;
        int j=col/3*3;
        for(int k=i;k<i+3;k++){
            for(int l=j ; l<j+3;l++){
                if(board[k][l]==num)
                return false;
            }
        }
        return true;
    }
    public:
    bool solve(vector<vector<char>>& board,int row,int col){
        if(row == 9){
            return true;
        }
        int nextcol=col+1,nextrow = row;
        if(col==9){
            nextrow = row+1;
            nextcol=0;
            //return solve(board,row+1,0);
        }
        if(board[row][col] !='.'){
            return solve(board,nextrow,nextcol);
        }
        for(char ch='1';ch<='9';ch++){
            if(isSafe(board,nextrow,col,ch)){
                board[row][col]=ch;
                if(solve(board,nextrow,nextcol)){
                    return true;
                }
                board[row][col]='.';
            }
        }
        return false;
    }
};
int main()
{
    vector<vector<char>> board={{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
    sudukuSolver s;
     bool solved = s.solve(board,0,0);

    if(solved){
        for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
        }
    }else {
        cout<<"This is un solveable ";
    }
    return 0;
}
