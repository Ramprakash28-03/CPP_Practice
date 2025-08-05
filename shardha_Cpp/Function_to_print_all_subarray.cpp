#include<iostream>
#include<vector>
using namespace std;
int sub_array(vector<int> &vec){
    int size=vec.size();
    for(int start=0;start<size;start++){
        for(int end=start;end<size;end++){
            for(int i=start;i<=end;i++){
                cout<<vec.at(i)<<" ";
            }
            cout<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    vector<int> arr={1,2,3,4,5};
    sub_array(arr);
    return 0;
}