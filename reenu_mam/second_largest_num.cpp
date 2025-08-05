#include<iostream>
#include<vector>
#include<climits>
using namespace std; 
class second_largest{
    public:
    int sec_larg(vector<int> arr){
        int first_larg = INT_MIN;
        int second_larg = INT_MIN;
        for(int i=0 ;i<arr.size(); i++ ){
            if( arr[i]> first_larg){
                second_larg = first_larg;
                first_larg =arr[i];
            }
            else if(arr[i] != first_larg){
                second_larg = max(second_larg,arr[i]);
            }
        }
        return second_larg;
    }

};
int main(){
    vector<int> arr = {1,2,3,-2,6,22,22};
    second_largest S;
    cout<<S.sec_larg(arr);
}