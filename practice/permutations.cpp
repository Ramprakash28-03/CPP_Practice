#include<iostream>
#include<string>
#include<vector>
using namespace std;
class solution{
    public:
    void get_perm(string &name, int idx, vector<string> &ans){
        if(idx == name.size()){
            ans.push_back(name);
            return ;
        }
        for(int i=idx; i<name.size(); i++){
            swap(name[i],name[idx]);
            get_perm(name,idx+1,ans);
            swap(name[i],name[idx]);
        }
    }
    vector<string> answer(string &name){
        vector<string> ans;
        get_perm(name,0,ans);
        return ans;
    }
};
int main(){
    string name = "ram";
    solution myObj;
    vector<string> ans = myObj.answer(name);
    for(string val : ans){
        cout<<val<<" ";
    }
    return 0;

}