#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int>& arr){
    int prev,curr;
    for(int i=1; i<arr.size();i++){
        curr=arr.at(i);
        prev=i-1;
        while(prev>=0 && arr.at(prev)>curr){
            arr.at(prev+1)=arr.at(prev);
            prev--;
        }
        arr.at(prev+1)=curr;
        
    }
}
void print(vector<int> arr){
    for(int val : arr){
        cout<<val<<" ";
    }
}
int main() {
    vector<int> arr={1,2,-1,53,-32,13535,12,5};
    insertion_sort(arr);
    print(arr);
    return 0;
}