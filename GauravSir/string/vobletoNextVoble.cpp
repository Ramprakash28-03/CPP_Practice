#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'a'){
            s[i] = 'e';
        }else if(s[i] == 'e'){
            s[i]='i';
        }else if(s[i] == 'i'){
            s[i]='o';
        }else if(s[i] == 'o'){
            s[i]='u';
        }else if(s[i] == 'u'){
            s[i]='a';
        }else if(s[i] == 'z'){
            s[i]='a';
        }else{
            int a = s[i];
            s[i] = (char)(s[i]+1);
        }
    }
    cout<<s;
    return 0;
}
