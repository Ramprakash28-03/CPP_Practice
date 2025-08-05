#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int count_of_tar_sum(vector<int> arr,int tar){
    int n=arr.size();
    vector<int> pre_sum(n,0);
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        pre_sum[i]=sum;
    }
    unordered_map<int,int> m;
    for(int j=0;j<n;j++){
        if(pre_sum[j]==tar){
            count++;
        }
        int val=pre_sum[j]-tar;
        if(m.find(val) != m.end()){
            count+=m[val];
        }
        if(m.find(pre_sum[j]) == m.end()){
            m[pre_sum[j]]=0;
        }
        m[pre_sum[j]]++;
        
    }
    return count;

}
int main(){
    vector<int> arr={9,4,0,20,3,10,0,5};
    int tar=33;
    cout<<count_of_tar_sum(arr,tar);
    return 0; 

}
