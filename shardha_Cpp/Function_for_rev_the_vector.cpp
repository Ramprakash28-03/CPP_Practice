#include<iostream>
#include<vector>
using namespace std;
void rev(vector<int> &vec){
    int start=0;
    int end=vec.size()-1;
    for(int i=0;start<end;i++){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}
int main(){
    vector<int> vec={1,2,3,4,5,6,7,8,'c',10,11};
    rev(vec);
    for( int val:vec){
        cout<<val<<" ";
    }
    return 0;
}