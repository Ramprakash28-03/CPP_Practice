#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector<int> arr,int num){
    for( int i=0;i<arr.size();i++){
        if(arr[i]==num)
        {
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={23,43,123,51,12,11,63,56,61,6,66};
    int num;
    cout<<"Give the number which you want to find : ";
    cin>>num;
    cout<<"The index of the num is : "<<linearSearch(arr,num);
    return 0;
}