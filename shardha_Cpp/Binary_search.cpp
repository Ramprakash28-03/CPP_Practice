#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary_search(vector<int> vec,int num){
    int start=0,end=vec.size()-1;
    int mid;
    for(int i=0;start<=end;i++){
        mid=start+ (end-start)/2;
        if(num==vec.at(mid)){
            return mid;
        }
        else if(num>vec.at(mid)){
            start=mid+1;
        }
        else
        end=mid-1;
    }
    return -1;
}
int main (){
    vector<int> arr={1,2,5,6,11,15,16,21,22,23,25,26,35,36};
    int num=42;
    cout<<"The index of the number is : "<<binary_search(arr,num);
    return 0;
}
