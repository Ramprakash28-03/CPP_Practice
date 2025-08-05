#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class rotateByTakingExtraSpace{
    public:
    void rotate(vector<int>& nums,int k){
        int n=nums.size();
        vector<int> arr;
        k %= n;
        for(int i=n-k;i<n;i++){
            arr.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++){
            arr.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }
    }
};
class rotateInSingleSpace{
    public:
    void rotate(vector<int>& nums,int k){
        int n=nums.size();
        k %= n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,11,12,13,14,15,16,17};
    rotateByTakingExtraSpace E;
    rotateInSingleSpace S;
    E.rotate(arr,5);
    for(int val : arr){
        cout<<val<<" ";
    }
}