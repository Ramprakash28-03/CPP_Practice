#include<iostream>
#include<vector>
using namespace std;
void Sort(vector<int> &arr){
    int mid=0,low=0,high=arr.size()-1;
    for(int i=0;i<arr.size();i++){
        if(arr.at(mid)==0){
            swap(arr.at(mid),arr.at(low));
            mid++; low++;
        }
        else if(arr.at(mid)==1){
            mid++;
        }
        else{
            swap(arr.at(high),arr.at(mid));
            high--;
        }
    }
}
int main(){
    vector<int> arr={1,2,0,1,1,2,2,0,0,0,0};
    Sort(arr);
    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;
}