#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            vector<vector<int>> ans;
           int n=nums.size();
           set<vector<int>> s;
            sort(nums.begin(),nums.end());
            for(int i = 0 ; i < n ;i++ ){
                while(i>0 && nums[i] == nums[i-1]){
                    continue;
                }
                for(int j = i+1 ; j < n; j++){
                    int st = j+1;
                    int end = n-1;
                    while(st<end){
                        long long sum = (long long)nums[i] + (long long)nums[j] +  (long long)nums[st] + (long long)nums[end];
                        if(sum == target){
                            vector<int> cur_sum;
                            cur_sum.push_back(nums[i]);
                            cur_sum.push_back(nums[j]);
                            cur_sum.push_back(nums[st]);
                            cur_sum.push_back(nums[end]);
                            sort(cur_sum.begin(),cur_sum.end());
                            if(s.count(cur_sum) == 0){
                                 ans.push_back({nums[i],nums[j],nums[st],nums[end]});
                            }
                            s.insert(cur_sum);
                            st++;
                        }
                        else if(sum > target){
                            end--;
                        }
                        else {
                            st++;
                        }
                    }
                }
            }
            return ans;
            
        }
    };