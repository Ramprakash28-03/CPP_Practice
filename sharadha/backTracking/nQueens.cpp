#include<iostream>
#include<string>
#include<vector>
using namespace std;
class nQueens{
    void printAns(vector<string>& board){
        for(int i=0;i<board.size();i++){
            cout<<board[i]<<endl;
        }
        cout<<"-------------------------\n";
    }
    bool isSafe(vector<string> &board,int row,int col){
        // col check
        for(int i=0;i<board.size();i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        // row check
        for(int j=0;j<board.size();j++){
            if(board[row][j]=='Q'){
                return false;
            }
        }
        // left diagonal check
        for(int i=row,j=col;i>=0 && j>=0 ; i--,j--){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        //Right diagonal
        for(int i=row,j=col; i>=0 && j<board.size();i--,j++){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        return true;
    }
    public:
    void n_Queens(vector<string> &board,int row,vector<vector<string>>& ans){
        if(row == board.size()){
            ans.push_back({board});
            printAns(board);
            return;
        }
        for(int j=0;j<board.size();j++){
            if(isSafe(board,row,j)){
                board[row][j]='Q';
                n_Queens(board,row+1,ans);
                board[row][j]='.';
            }
        } 
    }
};
int main(int argc, char const *argv[])
{   int n;
    cout<<"Give the Number of n : ";
    cin>>n;
    vector<string> board(n,string(n,'.'));
    vector<vector<string>> ans;
    nQueens Q;
    Q.n_Queens(board,0,ans);
    cout<<ans.size()<<endl;
    return 0;
}

