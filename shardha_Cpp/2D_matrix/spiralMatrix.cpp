#include<bits/stdc++.h>
using namespace std;
class printSprial{
    public:
    printSprial(vector<vector<int>> &arr){
        int st_row=0,st_col=0,end_row=arr.size()-1,end_col=arr[0].size()-1;
        while(st_row<end_row && st_col<end_col){
            //top
            for(int j=st_col;j<=end_col;j++){
                cout<<arr[st_row][j]<<" ";
            }
            //Right
            for(int i=st_row+1;i<=end_row;i++){
                cout<<arr[i][end_col]<<" ";
            }
            //bottom
            for(int j = end_col-1;j>=st_col;j--){
                //corner cases
                if(st_col == end_col){
                    break;
                }
                cout<<arr[end_row][j]<<" ";
            }
            //Left
            for(int i = end_row -1; i>st_row;i--){
                //corner case
                if(st_row==end_row)
                    break;
                cout<<arr[i][st_col]<<" ";
            }
            st_row++;
            end_row--;
            st_col++;
            end_col--;
        }
    }
};
int main(){
    vector<vector<int>> arr={{1,2,3,4,5},
                             {6,7,8,9,10},
                             {11,12,13,14,15},
                             {16,17,18,19,20},
                             {21,22,23,24,25}
                            };
printSprial P(arr);
return 0;

}