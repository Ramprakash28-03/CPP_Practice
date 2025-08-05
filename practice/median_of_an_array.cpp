#include<iostream>
#include<vector>
using namespace std;
class median{
    public:
    float mdian(vector<int> arr){
        if(arr.size() % 2 == 0){
            int a=arr.size()/2;
            int b= (arr.size()/2) - 1;
            float ans = ((float)arr[a] +(float)arr[b])/2;
            return ans;
        }
        else
        {
            
            return arr[(arr.size())/2];
        }
    }
};
int main(){
    median M;
    vector<int> arr = {1,2,3,4,5,6,6,7};
    cout<<M.mdian(arr);
}