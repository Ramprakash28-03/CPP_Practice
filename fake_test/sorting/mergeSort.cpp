#include<iostream>
#include<vector>
using namespace std;
class merge_sort{
   void merge(vector<int> &arr, int st,int mid,int end){
    vector<int> temp;
    int i=st;
    int j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]>arr[j]){
            temp.push_back(arr[j]);
            j++;
        }else {
            temp.push_back(arr[i]);
            i++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<temp.size();idx++){
        arr[st+idx]=temp[idx];
    }
   }
   public: 
  void mergeSort(vector<int>& arr,int st,int end){
    int mid= st+ (end-st)/2;
    if(st<end){
        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,st,mid,end);
    }
   }
};
int main(int argc, char const *argv[])
{
    vector<int> arr = {11,2,3,1,4,5,1,66,7,43};
    merge_sort M;
    M.mergeSort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}
