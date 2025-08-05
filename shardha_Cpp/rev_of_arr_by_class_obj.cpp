#include<iostream>
#include<climits>
#include<vector>
using namespace std;
class rev_array{
    public:
    void  rev_arr(vector<int> &arr){
        int st=0,end=arr.size()-1;
        while(st<=end){
            swap(arr[st++],arr[end--]);
        }
    }

};
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8};
    rev_array myObj;
    myObj.rev_arr(arr);
    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;


}