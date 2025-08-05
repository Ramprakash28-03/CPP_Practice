#include<iostream>
#include<math.h>
#include<iterator>
using namespace std; 
int minIndex(int arr[],int size){
    int min=arr[0],index=0;
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
            index=i;
        }
    }
    return index;
}
int maxIndex(int arr[],int size){
    int max=arr[0],index=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    return index;
}
int main (){
    int arr[]={-2,343,531,123,1,531,631,53132412,65316,6664,123,1234,3211,3241241,56};
    int size = sizeof(arr)/sizeof(arr[0]);
    swap(arr[minIndex(arr,size)],arr[maxIndex(arr,size)]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}