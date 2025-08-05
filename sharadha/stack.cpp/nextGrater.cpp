#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class nextGrater{
    public:
    vector<int> gtr(vector<int>& arr){
        stack<int> s;
        vector<int>ans(arr.size(),0);
        for(int i=arr.size()-1;i>=0;i--){
            while(s.empty()==false && s.top()<=arr[i]){
                s.pop();
            }
            if(s.empty()==false && s.top()>arr[i]){
                ans[i]=s.top();
            }else{
                ans[i]=-1;
            }
            s.push(arr[i]);
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{   
    vector<int> arr={6,1,2,3,4,5,6};
    nextGrater N;
    for(int val:N.gtr(arr)){
        cout<<val<<" ";
    }
    return 0;
}
