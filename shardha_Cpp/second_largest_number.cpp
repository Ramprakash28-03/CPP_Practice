#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class secondlargest{
    public:
    int secondlarge(vector<int> arr){
        int large=INT_MIN;
        int secLarge=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>large){
            secLarge=large;
            large=arr[i];
            }
            else if(arr[i]>secLarge && arr[i]<large){
                secLarge=arr[i];
            }
            
        }
        return secLarge;
    }
};
int main(){
    vector<int> arr={1,2,6,583,512389,1,982095,2,23,1809532,};
    secondlargest myObj;
    cout<<myObj.secondlarge(arr);

}