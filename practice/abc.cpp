#include<iostream>
#include<unordered_map>
#include<string>
#include<climits>
#include<vector>
using namespace std;
class Lmax_Rmax{
    public:
    int leftAndRight(vector<int> &arr){
        vector<int> lmax;
        vector<int> rmax(arr.size(),0);
        int n=arr.size(),mx=arr[0];
        rmax[n-1] = arr[n-1];
        lmax.push_back(arr[0]);
        for(int i=1; i<n;i++){
            mx=max(arr[i-1],mx);
            lmax.push_back(mx);
        }
        mx=arr[n-1];
        for(int i=n-2; i>=0;i--){
            mx=max(arr[i+1],mx);
            rmax[i]=mx;
        }
       int waterTapping = 0;
       for(int i=0;i<arr.size();i++){
        int tp = min(lmax[i],rmax[i])-arr[i];
        if(tp>0){
            waterTapping += tp;
        }
       }
       return waterTapping;
    }
};
int main(){
    vector<int> arr = {1,2,3,4,5,1,7};
    Lmax_Rmax c;
    cout<<"water tapping "<<c.leftAndRight(arr);
    return 0;
}