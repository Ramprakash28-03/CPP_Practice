#include<iostream>
using namespace std;
int check(int arr[],int size){
        for(int i=0;i<size;i++){
            bool is_repeat=false;
            for(int j=0;j<size;j++){
                
                if(arr[i]==arr[j] && i!=j){
                    is_repeat=true;
                    break;
                }

            }
            if(is_repeat== false){
               cout<<arr[i]<<" ";
            }
        }
}  
int main(){
    int arr[]={234093,234,532,531,65,1,3,6,33,1,3,56,3,6},size=sizeof(arr)/sizeof(arr[0]);
     check(arr,size);
    return 0;
}