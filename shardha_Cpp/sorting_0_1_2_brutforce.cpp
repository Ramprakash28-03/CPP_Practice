#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[10] = {0,2,1,1,2,0,1,0,1,2};
    sort(arr,arr+10);
    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;
}