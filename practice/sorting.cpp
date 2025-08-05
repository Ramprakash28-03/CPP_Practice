#include<bits/stdc++.h>
using namespace std;
class sortt{
    public:
    void bubbleSort(vector<int> &arr){
        int n=arr.size();
        for(int i=0;i<n;i++){
            bool flag = false;
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j+1],arr[j]);
                    flag = true;
                }
            }
            if(!flag){
                return ;
            }
        }
    }
    void selection_sort(vector<int> &arr){
        for(int i=0;i<arr.size()-1;i++){
            int smaller = arr[i];
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]<arr[i]){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
    void insertion_sort(vector<int> &arr){
        int n = arr.size();
        for(int i=0;i<n;i++){
            int srt = arr[i];
            int prev = i-1;
            while(prev >=0 && srt<arr[prev]){
                swap(arr[prev+1],arr[prev]);
                prev--;
            }
            
        }
    }
    void merge(vector<int> &arr,int st,int mid,int end){
        vector<int> temp;
        int i=st;
        int j=mid+1;
        while(i<=mid && j<=end){
            if(arr[j]<arr[i]){
                temp.push_back(arr[j]);
                j++;

            }else{
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
        for(int idx = 0 ; idx<temp.size();idx++){
            arr[st+idx] = temp[idx];
        }
    }
    void mergeSort(vector<int> &arr,int st,int end){
        if(st<end){
            int mid = st + (end-st)/2;
            mergeSort(arr,st,mid);
            mergeSort(arr,mid+1,end);
            merge(arr,st,mid,end);
        }

    }
};

class srt{
    public:
    void insertionSort(vector<int> &arr){
        for(int i=0;i<arr.size();i++){
            int cur=arr[i];
            int prev=i-1;
            while(prev >=0 && cur < arr[prev]){
                swap(arr[prev],arr[prev+1]);
                prev--;
            }
        }
    }
};



int main(){
    vector<int> arr={10,9,8,77,6,5,4,3,2,1};
    sortt B;
    B.selection_sort(arr);
    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;
}
