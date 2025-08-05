#include<iostream>
#include<vector>
using namespace std;
pair<int,int> indexOfMatrix(vector<vector<int>> mtx,int ele){
    pair<int,int> p;
    for(int i=0;i<mtx.size();i++){
        for(int j=0;j<mtx[i].size();j++){
            if(ele == mtx[i][j]){
                p={i,j};
                return p;
            }
        }
    }
    return {-1,-1};
}
int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int ele=2;
    cout<<indexOfMatrix(arr,ele).first<<" "<<indexOfMatrix(arr,ele).second;
    return 0;
}