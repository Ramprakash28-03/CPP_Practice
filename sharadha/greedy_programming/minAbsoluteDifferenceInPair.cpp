#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class minAbsoluteDifference{
    public:
    int minAbsDiff(vector<int>& num1,vector<int>& num2){
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        int ans=0;
        for(int i=0;i<num1.size();i++){
            ans+=abs(num1[i]-num2[i]);
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    vector<int> num1={1,2,3},num2={3,1,2};
    minAbsoluteDifference M;
    int ans=M.minAbsDiff(num1,num2);
    cout<<ans;
    return 0;
}
