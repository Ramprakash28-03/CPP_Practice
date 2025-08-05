#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class khadesAlgo{
    public:
    int maxSum(vector<int> arr){
        int ans=INT_MIN;
        int sum=0;
        int negative_count=0,negative_ans=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                negative_count++;
                negative_ans=max(negative_ans,arr[i]);
            }
            if(sum<0){
                sum=0;
            }
            sum+=arr[i];
             ans=max(sum,ans);
        }
        if(negative_count==arr.size()){
            return negative_ans;
        }
        else
        return ans;
    }
};
int main(){
    vector<int> arr={1,2,3,4,-4,5,6,-1,2,54,-5,6};
    khadesAlgo myObj;
   int ans= myObj.maxSum(arr);
   cout<<ans;
   return 0;
}









// int cur_sum=INT_MIN,max_sum=INT_MIN,m_sum=INT_MIN,cout=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]<0){
//                 cout++;
//             }
//             m_sum=max(m_sum,nums[i]);
//         }
//         if(cout==nums.size()) return m_sum;
//         for(int i=0;i<nums.size();i++){
//             if(cur_sum<0){
//                 cur_sum=0;
//             }
//             cur_sum+=nums[i];
//             max_sum=max(max_sum,cur_sum);
//         }
//         return max_sum;
//     }