#include<iostream>
#include<vector>
using namespace std;
int count_of_sum(vector<int> nums,int tar){
    int count=0;
   int n=nums.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+nums[j];
            if(sum==tar){count++;}
        }
    }
    return count;
}
int main(){
    vector<int> nums={1,2,3,4,5,5,8,123,29,4,5,5};
    int tar=14;
    cout<<count_of_sum(nums,tar);
    return 0;

}