#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    set<int> s1;
    vector<int> m,n,ans;
    int n1,m1;
    cin>>m1>>n1;
    for(int i=0;i<n1;i++){
        int a;
        cin>>a;
        n.push_back(a);
        s1.insert(a);
    }
    for(int i=0;i<m1;i++){
        int a;
        cin>>a;
        m.push_back(a);
    }
    for(int i=0;i<m1;i++){
        if(s1.find(m[i]) != s1.end()){
            ans.push_back(m[i]);
            s1.erase(m[i]);
        }
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}
