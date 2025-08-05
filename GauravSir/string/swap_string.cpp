#include<bits/stdc++.h>
using namespace std;
class mirrorString{
    public:
    string mirror(string str){
        for(int i=0;i<str.size();i++){
            int a = ('a'-str[i])+122;
                str[i]= (char)a;
        }
        return str;
    }
};
int main(){
    mirrorString m;
    cout<<m.mirror("abcd");
    return 0;
}