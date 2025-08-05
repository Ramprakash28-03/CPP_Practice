#include<iostream>
#include<vector>
#include <string.h>
using namespace std;
class printSubsets{
    public:
    void printSubset(string s,string str,vector<string> & ans){
        if(str.size()==0){
            cout<<s<<endl;
            ans.push_back(s);
            return;
        }
        printSubset(s+str[0],str.substr(1,str.size()-1),ans);
        printSubset(s,str.substr(1,str.size()-1),ans);

    }
};
int main(int argc, char const *argv[])
{
    vector<string> ans;
    printSubsets p;
    p.printSubset("","ram",ans);
    return 0;
}
