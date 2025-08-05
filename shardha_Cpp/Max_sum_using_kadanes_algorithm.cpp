#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int max_subarray(vector<int> &vec){
    int max_sum= INT_MIN,curr_sum= 0;
    for(int i=0;i<vec.size();i++){
        curr_sum+=vec.at(i);
        max_sum=max(curr_sum,max_sum);
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    return max_sum;
}
int main(){
    vector<int> arr={3,-4,5,4,-1,7,-8};
    cout<<"The maximum sum of given array is : "<<max_subarray(arr);
    return 0;
}