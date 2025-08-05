#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int sumOfDiagonals(vector<vector<int>> vec){
    int sumofDiagonal=0;
    for(int i=0;i<vec.size();i++){
        sumofDiagonal+=vec[i][i];
        if(i!=(vec.size()-i-1)){
            sumofDiagonal+=vec[i][vec.size()-i-1];
        }
    }
    return sumofDiagonal;
}
int main(){
    vector<vector<int>> arr={{1,2,3},{5,6,7},{9,10,11}};
    cout<<"The sum of Diagonal elements "<<sumOfDiagonals(arr);
    return 0;
}