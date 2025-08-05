#include<iostream>
#include<vector>
#include <string.h>
using namespace std;
class printSubsets{
    public:
    void printSubset(string s,string str,vector<string> & ans){
        if(str.size()==0){
            ans.push_back(s);
            cout<<s<<endl;
            return;
        }
        for(int i=0;i<str.size();i++){
            string stri = str.substr(0,i) + str.substr(i+1,str.size()-i-1);
            printSubset(s+str[i],stri,ans);

        }

    }
};
int main(int argc, char const *argv[])
{
    vector<string> ans;
    printSubsets p;
    p.printSubset("","ram",ans);
    return 0;
}
