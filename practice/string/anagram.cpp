#include<bits/stdc++.h>
using namespace std;
class validAnagram{
    public:
    bool validAnagramBruteForce(string s1, string s2){
        if(s1.size() != s2.size()){
            return false;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1 != s2){
            return false;
        }
        else{
            return true;
        }
    }
    bool validAnagramOptimized(string s1,string s2){
        if(s1.size() != s2.size()){
            return false;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1 != s2){
            return false;
        }
        else{
            return true;
        }
    }
};
int main(int argc, char const *argv[])
{
    validAnagram V;
   cout<<V.validAnagramBruteForce("abcdefghijklmnopqrstuvwxyz","abcdefghijklmnopqrstuvwxyz");
    return 0;
}
