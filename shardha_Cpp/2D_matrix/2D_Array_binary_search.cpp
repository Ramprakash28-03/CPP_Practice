#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool search_ele(vector<vector<int>> arr,int row,int ele){
    int start=0,end=arr[row].size()-1,mid;
    if(row==-1){return false;}
    while(start<=end){
         mid=start+(end-start)/2;
        if(arr[row][mid] == ele){
            return true;
        }
        else if(arr[row][mid]<ele){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;

}
int binary_search(vector<vector<int>> arr,int ele){
    int start_row=0,end_row=arr.size()-1,mid;
    while( start_row <= end_row){
         mid = start_row + (end_row-start_row)/2;
        if(arr[mid][0]<=ele  && ele<=arr[mid][arr[mid].size()-1] ){
            return mid;
        }
        else if(ele<arr[mid][0]){
            end_row=mid-1;
        }
        else {
            start_row=mid+1;
        }
    }
    return -1;
}
int main(){
    vector<vector<int>> vec={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int ele=17;
    int row=binary_search(vec,ele);
    cout<<search_ele(vec,row,ele);
    return 0;
}