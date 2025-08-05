#include<iostream>
using namespace std;
int linear_search(int arr[],int num,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==num)
        return i;
    }
    return -1;
}
int main(){
    int arr[5]={10,32,53,53125,5},num,size=5;
    cout<<"Give the number you want to find : ";
    cin>>num;
    cout<<"The number found at the index is : "<<linear_search(arr,num,size);
    return 0;
}
