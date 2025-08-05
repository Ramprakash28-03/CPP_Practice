#include<iostream>
#include<vector>
using namespace std;
class SrtArr{
    public:
    int ans(vector<int> &arr){
        int j=0;
        int i=1;
        while( i<arr.size()){
            if(arr[j] != arr[i]){
                j++;
            }
                swap(arr[i],arr[j]);
            i++; 
        }
        return j;
    }
};
int main(){
    vector<int> arr{1,2,2,3,3,3,3,4,4,4,4,6,6,6,6};
    SrtArr S;
   int a= S.ans(arr);
    for(int val=0 ; val<=a; val++){
        cout<<arr[val]<<" ";
    }
    return 0;
}