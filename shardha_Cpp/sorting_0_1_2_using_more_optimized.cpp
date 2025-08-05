#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sort_opt(vector<int> &arr){
    int count_0=0,count_1=0,count_2=0;
    for(int i=0;i<arr.size();i++){
        if(arr.at(i)==0){
            count_0++;
        }
        else if(arr.at(i)==1){
            count_1++;
        }
        else
        count_2++;

    }
    for(int i=0;i<arr.size();i++){
        if(count_0>0){
            arr.at(i)=0;
            count_0--;
        }
        else if(count_1>0){
            arr.at(i)=1;
            count_1--;
        }
        else
        arr.at(i)=2;

    }
        
    }
    int main(){
        vector<int> arr={0,1,2,1,1,0,2,1,0,0};
        sort_opt(arr);
        for(int val : arr ){
            cout<<val<<" ";
        }
        return 0;
    }
