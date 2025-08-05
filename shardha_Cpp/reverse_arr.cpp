#include<iostream>
#include<iterator>
using namespace std;
int rev_arr(int arr[],int start,int end){
    for(int i=0;start<end;i++){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"The reverse of array is : ";
}
int main(){
    int arr[5]={1,2,3,4,5},start=0,ends=4;
    rev_arr(arr,start,ends);
    copy(begin(arr),end(arr),ostream_iterator<int>(cout, " "));


}