#include<bits/stdc++.h>
using namespace std;
class mxsubArray{
    public:
    int maxSubArray(vector<int> &arr){
        int maxx=arr[0];
        int minn=arr[0];
        int ans=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                swap(maxx,minn);
            }
            minn=min(arr[i]*minn,arr[i]);
            maxx=max(arr[i]*maxx,arr[i]);
            ans=max(ans,maxx);
        }
        return ans;
    }
};
int main()
{   vector<int> arr={1,2,4,5,61,-1,-6};
    mxsubArray m;
    int ans = m.maxSubArray(arr);
    cout<<ans;
    return 0;
}
