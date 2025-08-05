#include<iostream>
#include<vector>
using namespace std;
void print_sub_array(vector<int> arr,vector<int> &ans, int i){
    if(i == arr.size()){
        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    print_sub_array(arr,ans,i+1);
    ans.pop_back();
    print_sub_array(arr,ans,i+1);
}
int main(){
    vector<int> arr={1,2,3,4,5};
    vector<int> ans;
    print_sub_array(arr,ans,0);
    return 0;
}
