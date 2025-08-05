#include<iostream> 
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int> arr,int tar){
    vector<vector<int>> ans;
    set<vector<int>> s;
    int count=0;
    int sum=0;
    for(int i=0;i<arr.size()-2;i++){
        for(int j=i+1;j<arr.size()-1;j++){
            for(int k=j+1;k<arr.size();k++){
                 sum = arr[i]+arr[j]+arr[k];
                 if(sum==tar){
                    vector<int> tri={arr[i],arr[j],arr[k]};
                    sort(tri.begin(),tri.end());
                    if(s.find(tri)== s.end()){
                        ans.push_back(tri);
                    }
                    s.insert(tri);
                 }
                
            }
        }

    }
    return ans;

}
int main(){
    vector<int> arr={1,2,3,5,6,-1,-2,-6};
    int tar=3;
    vector<vector<int>> ans = threeSum(arr,tar);
    for(int i=0;i<ans.size();i++){
        for(int val:ans[i]){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}








/*    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if( i< nums.size()-1 && nums[i] == nums[i+1]){
                while(nums[i] != nums[i+1]){
                    i++;
                }
            }
            int left=i+1;
            int right= nums.size()-1;
            while(left<right){
                vector<int> cur_ans;
                if((nums[i]+nums[left]+nums[right] ) == 0){
                    cur_ans.push_back(nums[i]);
                    cur_ans.push_back(nums[left]);
                    cur_ans.push_back(nums[right]);
                    sort(cur_ans.begin(),cur_ans.end());
                    if(s.count(cur_ans) == 0){
                         ans.push_back(cur_ans);
                    }
                    s.insert(cur_ans);
                    if(nums[left] == nums[left+1]){
                while(nums[left] != nums[left+1]){
                    left++;
                }
            }
            if(nums[right] == nums[right-1]){
                while(nums[right] != nums[right-1]){
                    right--;
                }
            }
                    left++;
                }
                else if (nums[i]+nums[left]+nums[right]  > 0){
                    if(nums[right] == nums[right-1]){
                while(nums[right] != nums[right-1]){
                    right--;
                }
            }
                    right--;
                }
                else{
                     if(nums[left] == nums[left+1]){
                while(nums[left] != nums[left+1]){
                    left++;
                }
            }
                    left++;
                }
            }

        }
        return ans;
        
    }
};*/