#include<iostream> 
#include<vector>
#include<string.h>
#include<climits>
using namespace std;
class bbst{
    public:
    void bbSt(vector<int> &arr){
        for(int i=0; i<arr.size(); i++){
            int flag = 0;
            for(int j = 0; j<arr.size()-i-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    flag=1;
                }
            }
            if(flag == 0){
                break;
            }
        }
    }
};
class insrtSrt{
    public:
    void insSrt(vector<int> &arr){
        for(int i=0; i<arr.size()-1; i++){
            for(int j=i+1; j<arr.size(); j++){
                if(arr[j]<arr[i]){
                    swap(arr[j],arr[i]);
                }
            }
        }
    }
};
class mergeSrt{
    public:
    void merge(vector<int> &arr, int st, int mid, int end){
        vector<int> temp;
        int i=st,j=mid+1;
        while(i<=mid && j<=end){
            if(arr[i]<arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
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
        for(int idx=0; idx<temp.size(); idx++){
            arr[idx+st] = temp[idx];
        }
    }
    void mrgSort(vector<int> &arr, int st, int end){
        int mid = st+ (end-st)/2;
        if(st<end){
            mrgSort(arr,st,mid);
            mrgSort(arr,mid+1,end);
            merge(arr,st,mid,end);
        }
    }
};
class quickSort{
    

};
int main(){
    vector<int> arr = {1,2,11,1,5,4,6,19,89,3};
    mergeSrt B;
    B.mrgSort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;

}
