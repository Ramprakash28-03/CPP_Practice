#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> vec(3,0);
    cout<<vec.capacity();
    cout<<vec.size();
    vec.push_back(10);
    cout<<" "<<vec.capacity();

    return 0;
}



vector<int> findErrorNums(vector<int>& nums) {
    int dup = -1, missing = -1;
    int n = nums.size();
    
    for (int x : nums) {
        int idx = abs(x) - 1;
        if (nums[idx] < 0) {
            dup = abs(x);
        } else {
            nums[idx] = -nums[idx];
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            missing = i + 1;
            break;
        }
    }
    
    return {dup, missing};
}


vector<int> findErrorNums(vector<int>& nums) {
    map<int,int> m;
    int repeat,total,sum=0,missing;
    total = nums.size()*(nums.size()+1)/2;
    for(int i=0;i<nums.size();i++){
        if(m.find(nums[i]) == m.end()){
            m[nums[i]]=0;
        }
        sum += nums[i];
        m[nums[i]]++;
        if(m[nums[i]]>1){
            repeat = nums[i];
        }
    }
    missing = total-(sum-repeat);
    return {repeat,missing};
}
