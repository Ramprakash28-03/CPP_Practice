#include<bits/stdc++.h>
using namespace std;
class sumofstring{
    public:
    sumofstring(string str){
        int ans=0;
        for(int i=0;i<str.size();i++){
            ans += str[i]-'a'+1;
        }
        cout<<ans;
    }
};
int main(){
    sumofstring s("cat");
    return 0;
}