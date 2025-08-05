#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool prime(int num){
    if(num<2){
        return false;
    }
    for(int i=2; num>i*i; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}
int sec_high(vector<int> &arr){
    int high = INT_MIN;
    int sec_high = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>high ){
            sec_high = high;
            high = arr[i]; 
        }
        if(arr[i]!=high && arr[i]>sec_high){
            sec_high = arr[i];
        }
    }
    return sec_high;
}
int sec_low(vector<int> &arr){
    int low = INT_MAX;
    int sec_low = INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<low ){
            sec_low = low;
            low = arr[i]; 
        }
        if(arr[i]!=low && arr[i]<sec_low){
            sec_low = arr[i];
        }
    }
    return sec_low;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int sum = sec_high(arr) + sec_low(arr);
    cout<<prime(sum);
    return 0;
}