#include<iostream>
using namespace std;
int product(int arr[],int size){
    int mul = 1;
    for(int i=0;i<size;i++){
        mul=arr[i]*mul;
    }
    return mul;
}
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10},size=10;
    cout<<"The product of elements of array is : "<<product(arr,size)<<"\n";
    cout<<"The sum of the elements of array is : "<<sum(arr,size);
    return 0;

}