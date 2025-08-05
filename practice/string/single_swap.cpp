#include<bits/stdc++.h>
using namespace std;
class single_swap{
    public:
    bool swapp(string s1,string s2){
        if(s1.size() != s2.size()){
            return false;
        }
        for(int i=0;i<s1.size()-1;i++){
            for(int j=s1.size()-1;j>i;j--){
                swap(s1[i],s1[j]);
                if(s1==s2){
                    return true;
                }
                else{
                    swap(s1[i],s1[j]);
                }
            }
        }
        return false;
    }
};
int main(int argc, char const *argv[])
{
    single_swap s;
    cout<<s.swapp("bankabcdekfk","bankbacdekfk");
    return 0;
}
