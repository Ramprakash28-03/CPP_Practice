#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int>& arr){
    for(int i=0;i<arr.size()-1;i++){
        int smallest = arr.at(i);
        for(int j=i+1;j<arr.size();j++){
            if(arr.at(j)<smallest){
                swap(smallest,arr.at(j));
            }
        }
        swap(arr.at(i),smallest);
    }
}
void print(vector<int> arr){
    for(int val : arr){
        cout<<val<<" ";
    }
}
int main(){
    vector<int> arr = {1,2,11,125,-3,-5,-1};
    selection_sort(arr);
    print(arr);
    return 0;
}