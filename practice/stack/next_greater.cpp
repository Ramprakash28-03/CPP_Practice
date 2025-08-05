#include<bits/stdc++.h>
using namespace std;
class nextGtr{
    public:
    vector<int> nextGreater(vector<int> &arr){
        vector<int> ans(arr.size(),-1);
        stack<int> s;

        for(int i=arr.size()-1; i>=0;i--){
            while(s.size()>0 && arr[i]>s.top()){
                s.pop();
            }
            if(s.size()==0){
                ans[i]=-1;
            }
            else{
                ans[i]=s.top();
            }
            s.push(arr[i]);
        }
        return ans;
    }

};
int main()
{   vector<int> arr={1,2,534,54,1234,49,133,235,359,194,90};
    nextGtr n;
    for(int val : n.nextGreater(arr)){
        cout<<val<<" ";
    }
    return 0;
}
