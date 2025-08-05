#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
vector<int> missingAndRepeatingValues(vector<vector<int>> arr){
    int n=arr.size();
    unordered_set<int> s;
    int a,b,sum=0;
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s.find(arr[i][j]) != s.end()){
                a=arr[i][j];
                ans.push_back(a);
            }
            sum+=arr[i][j];
            s.insert(arr[i][j]);
        }
    }
    b=((n*n+(n*n*n*n))/2) - (sum - a);
    ans.push_back(b);
    return ans;
}
int main(){
    vector<vector<int>> arr = {{1,2,3},{4,4,5},{7,8,9}};
   vector<int> ans =  missingAndRepeatingValues(arr);
    for(int val : ans){
        cout<<val<<" ";
    }
    return 0;

}