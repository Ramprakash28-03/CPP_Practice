#include<iostream>
#include<vector>
#include<string>
using namespace std;
class nQueens{
    bool issafe(vector<string>& board,int row,int col,int n){
        //col
        for(int j=0;j<n;j++){
            if(board[row][j]=='Q')
            return false;
        }
        //rowfor
       for(int i=0;i<n;i++){
            if(board[i][col]=='Q')
            return false;
        }
        for(int i=row,j=col; i>=0 && j>=0; j--,i--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row,j=col; i>=0 && j<n; i--,j++){
        if(board[i][j]=='Q')
        return false;
        }

        return true;
    }
    void helper(vector<string>& board,int row,int n,vector<vector<string>>& ans)
    {
        if(row==n){
            ans.push_back({board});
            return ;
        }
        for(int j=0;j<n;j++){
            if(issafe(board,row,j,n)){
                board[row][j]='Q';
                helper(board,row+1,n,ans);
                board[row][j]='.';
            }
        }
    }
    public:
    vector<vector<string>> nqueen(int n){
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        helper(board,0,n,ans);
        return ans;
    }
};
class suduku_solver{
    bool isSafe(vector<string>& board,int row,int col,char ch){
        //horizontal
        for(int i=0;i<9;i++){
            if(board[i][col]==ch){
                return false;
            }
        }
        //vertical
        for(int j=0;j<9;j++){
            if(board[row][j]==ch){
                return false;
            }
        }
        int i=row/3*3;
        int j=col/3*3;
        while(i<row+3){
            while(j<col+3){
                if(board[i][j]==ch){
                    return false;
                }
                j++;
            }
            i++;
        }
        return true;
    }
    void sdk_slv(vector<string> &board){
        
    }

};
int main(){
    nQueens Q;
    int n=6;
    vector<vector<string>> ans=Q.nqueen(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<Q.nqueen(n)[i][j]<<" , ";
        }
        cout<<endl;
    }
    return 0;
}