#include<iostream>
#include<vector>
#include<string>
using namespace std;
class solution{
    public:
    void helper(vector<vector<int>> &maze, int row,int col,string path,vector<string> &ans,vector<vector<bool>> &check_maze){
        int n = maze.size();
        if(row < 0 || col < 0 || row >= n || col >= n || maze[row][col] == 0 || check_maze[row][col] == true){
            return ;
        }
        if(row == n-1 && col== n-1 ){
            ans.push_back(path);
            return ;
        }
        check_maze[row][col] = true;
        helper(maze,row+1,col,path+"D",ans,check_maze); // down
        helper(maze,row-1,col,path+"U",ans,check_maze); // up
        helper(maze,row,col-1,path+"L",ans,check_maze); // left
        helper(maze,row,col+1,path+"R",ans,check_maze); // right
        check_maze[row][col] = false;
        
    }
    vector<string> solve(vector<vector<int>> &maze){
        string path="";
        int n = maze.size();
        vector<vector<bool>> check_maze(n,vector<bool>(n,false));
        vector<string> ans;
        helper(maze,0,0,path,ans,check_maze);
        return ans;
    }

};
int main(){
    vector<vector<int>> maze = {{1,0,0,0},{1,1,0,0},{1,1,1,0},{0,1,1,1}};
    solution myObj;
    vector<string> anss = myObj.solve(maze);
    for(string val : anss){
        cout<<val<<endl;
    }

}