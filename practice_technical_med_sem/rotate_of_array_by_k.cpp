#include<iostream>
#include<vector>
using namespace std;
class rotate_arr_k{
    public:
    void rotate(vector<int> &arr,int k){
        vector<int> nums;
        for(int i=0;i<arr.size();i++){
            if(i<k){
                nums.push_back(arr[i]);
            }
            if(i+k<arr.size()){
            arr[i]=arr[i+k];
            }
            else
            for(int j=0;j<k;j++)
            arr[i++]=nums[j];
        }
    }
};
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8};
    rotate_arr_k myObj;
    myObj.rotate(arr,1);
    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;
}