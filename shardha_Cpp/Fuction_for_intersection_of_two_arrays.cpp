#include<iostream>
using namespace std; 
int intersection(int arr1[],int arr2[],int size1,int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
}
int main(){
    int arr1[]={1,3,4,5,6,11,21,22,53,5},arr2[]={2,43,531,1,5,11,3115,123,6,7,32,21},size1,size2;
    size1=sizeof(arr1)/sizeof(arr1[0]);
     size2=sizeof(arr2)/sizeof(arr2[0]);
     intersection(arr1,arr2,size1,size2);
     return 0;
}