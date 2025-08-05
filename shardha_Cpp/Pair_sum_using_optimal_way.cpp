#include<iostream>
#include<vector>
using namespace std;
vector<int> pair_sum(vector<int> arr,int target){
    vector<int> ans;
    int start=0,end=arr.size()-1;
    for(int i=0;i<arr.size();i++){
        if(arr.at(start)+arr.at(end) == target ){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if ( arr.at(start)+arr.at(end) > target){
            end--;
        }
        else
        start++;
    }
    return ans;
}
int main(){
    vector<int> arr={2,7,11,13},ans;
    int target = 13;
    ans = pair_sum(arr,target);
    cout<<"The index of pair sum is : ";
    
    for( int val : ans){
        cout<<val<<" ";
    }
    return 0;
}