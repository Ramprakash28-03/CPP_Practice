#include<iostream>
#include<vector>
using namespace std;
int major_element(vector<int> vec){
    for(int i=0;i<vec.size();i++){
        int count=1;
        for(int j=i+1;j<vec.size();j++){
            if(vec.at(i) == vec.at(j)){
                count++;
        }
    }
    if(count>(vec.size()/2)){
        return vec.at(i);
    }
    }
     return -1;
}
int main(){
    vector<int> arr={1,2,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4};
    cout<<"The major element of the array is : "<<major_element(arr);
    return 0;
}