#include<iostream>
#include<vector>
#include<string>
using namespace std;
class nqueensolution{
    public:
    bool isSafe(vector<string> &board,int row,int col,int n){
        // horizontal
        for(int j=0; j<n; j++){
            if(board[row][j] == 'Q'){
                return false;
            }
        }
       // vertical
        for(int i=0; i<n; i++){
            if(board[i][col] == 'Q'){
                return false;
            }
        }
        // left diagonal
        for(int i=row, j=col; i>=0 && j>=0 ; i--,j--){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        // right diagonal
        for(int i=row, j=col; i>=0 && j<n ; i--,j++){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        return true;
    }
    void helper(vector<string> &board, int row,int n,vector<vector<string>> &ans){
        if(row == n ){
            ans.push_back({board});
            return ;
        }
        for(int j=0 ; j<n;j++){
            if(isSafe(board,row,j,n)){
                board[row][j] = 'Q';
                helper(board,row+1,n,ans);
                board[row][j] = '.';
            }
        }
    }
    vector<vector<string>> solve(int n){
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
         helper(board,0,n,ans);
         return ans;
    }
};
int main(){
    nqueensolution myObj;
    int n=7;
    vector<vector<string>> ans = myObj.solve(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" , ";
        }
        cout<<endl;
    }
    return 0;
    
}
