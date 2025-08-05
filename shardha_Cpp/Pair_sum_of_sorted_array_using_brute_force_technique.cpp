#include<iostream>
#include<vector>
using namespace std;
vector<int> pair_sum(vector<int> arr, int target){
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr.at(i)+arr.at(j) == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}
int main(){
    vector<int> arr={2,7,11,15};
    int target = 17;
    vector<int> ans = pair_sum(arr,target);
    for( int val : ans){
        cout<<val<<" ";
    }
    return 0;
}