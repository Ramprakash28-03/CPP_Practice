// this is also stores the unique elements but not in sorted order
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Unordered_set{
    public:
    unordered_set<int> ss(vector<int> ele){
        unordered_set<int>  s;
        for(int i=0; i<ele.size(); i++){
            s.insert(ele[i]);
        }
        return s;
    }
};
int main(){
    vector<int> ele = {1,2,3,21,1,1,15,53,1,66,6,7};
    Unordered_set US;
    for(int val : US.ss(ele)){
        cout<<val<<" ";
    }
    return 0;
}