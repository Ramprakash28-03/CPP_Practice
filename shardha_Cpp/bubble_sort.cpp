#include<iostream>
#include<vector>
using namespace std;
int count = 0;
void bubble_sort(vector<int> &arr){
    int n = arr.size()-1;
    for(int i=0;i<n;i++){
        int flag = 1;
        for(int j=0;j<n-i;j++){
            if(arr.at(j)>arr.at(j+1)){
                swap(arr.at(j),arr.at(j+1));
                flag = 0;
                count++;
            }
        }
        if(flag == 1){
            break;
        }
    }
}
int main(){
    vector<int> arr={20,30,40,50,5,60};
    bubble_sort(arr);
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl<<count;
    return 0;
}