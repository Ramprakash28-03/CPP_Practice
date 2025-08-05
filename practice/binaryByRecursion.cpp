#include<iostream>
#include<vector>
using namespace std; 
class BS{
    public:
    int ans(vector<int>& arr, int st, int end,int tar){
        int mid = st + (end-st)/2;
        if(st<=end){
            if(arr[mid] == tar){
                return mid;
            }
            else if(arr[mid]>tar){
                return ans(arr,st,mid-1,tar);
            }
            else{
                return ans(arr,mid+1,end,tar);
            }
        }
            return -1;
    }
    int search(vector<int> &arr, int tar){
        int st = 0, end = arr.size()-1;
        return ans(arr,st,end,tar);
    }
};
int main(){
    vector<int> arr = {2,3,5,11,13,16,17,18};
    BS b;
    cout<<b.search(arr,13);
    return 0;
}