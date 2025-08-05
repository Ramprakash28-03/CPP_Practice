#include<iostream>
#include<vector>
using namespace std;
int majorElement(vector<int> vec){
    int count=0,ans=0,cnt=0;
    for(int i=0;i<vec.size();i++){
        if(count==0){
             ans=vec.at(i);
        }
        if(ans==vec.at(i)){
            count++;
        }
        else
        count--;
    }
    for(int i = 0;i<vec.size();i++){
        if(ans==vec.at(i)){
            cnt++;
        }
    }
    if(cnt>vec.size()/2){
         cout<<"The major element is : ";
    return ans;
    }
    else{
        cout<<"There is no major element in this array : ";
        return -1;

    }
}
int main (){
    vector<int> arr={1,2,4,1,4,4,4};
   cout<<majorElement(arr);
    return 0;
}
