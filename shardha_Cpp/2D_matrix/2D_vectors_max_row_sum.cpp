#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxRowSum(vector<vector<int>> vec){
    int max_sum = INT_MIN;
    for(int i=0;i<vec.size();i++){
        int sumOfRow=0;
        for(int j=0;j<vec[i].size();j++){
            sumOfRow+=vec[i][j];
        }
        max_sum=max(max_sum,sumOfRow);
    }
    return max_sum;
}
int maxColumnSum(vector<vector<int>> vec){
    int max_sum = INT_MIN;
    for(int i=0;i<3;i++){
        int sumOfColumn=0;
        for(int j=0;j<vec.size();j++){
            sumOfColumn+=vec[j][i];
        }
        max_sum=max(max_sum,sumOfColumn);
    }
    return max_sum;
}
int main(){
    vector<vector<int>> vec={{2,3,5},{2,6,7},{234,53,1},{1,2,5}};
    cout<<"The max sum of row is : "<<maxRowSum(vec)<<endl;
    cout<<"The max sum of column : "<<maxColumnSum(vec);
    return 0;
}