#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorElement(vector<int> vec){
    sort(vec.begin(),vec.end());
    int count=1;
    for(int i=0;i<vec.size();i++){
        if(vec.at(i)==vec.at(i+1)){
            count++;
        }
            else
            count=1;
        if(count>(vec.size()/2)){
            return vec.at(i);
        }
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,1,2,1,2,1,2,1,2,2,2,2,2,2,1,3};
    cout<<"The major element is : "<<majorElement(arr);
    return 0;
}