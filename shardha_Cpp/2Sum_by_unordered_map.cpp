#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> indexOfsum(vector<int> arr,int target){
    unordered_map<int,int> m;
    int first,second;
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        first=arr[i];
        second=target-first;
        if(m.find(second) != m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first]=i;

    }
    return ans;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int tar=16;
    vector<int> ans=indexOfsum(arr,tar);
    for(int val:ans){
        cout<<val<<" ";
    }

    return 0;
}