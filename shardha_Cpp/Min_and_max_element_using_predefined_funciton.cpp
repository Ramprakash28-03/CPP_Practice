#include<iostream>
#include<algorithm>
using namespace std; 
int main(){
    int arr[10]={2,3,4,1,-5,6,6,31,34,5};
    cout<<"The minimum element is : " <<*min_element(arr+1,arr+10)<<"\n";
    cout<<"The maximum element is : "<<*max_element(arr+0,arr+10);
}