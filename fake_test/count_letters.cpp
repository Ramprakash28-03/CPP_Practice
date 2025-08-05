#include<iostream>
#include<string>
#include<vector>
using namespace std;
class count{
    public:
   vector<int> countstr(string str){
        vector<int> cnt(26,0);
        int cntt=0;
        for(int i=0;i<str.size();i++){
            if(tolower(str[i])-'a' >= 0 && tolower(str[i])-'a'<=25)
           { cnt[tolower(str[i])-'a']++;
            cntt++;
            }
        }
        cout<<"The total number of letter in the given string : "<<cntt<<endl;
        return cnt;
    }
    void print(vector<int> vec){
        for(int i=0;i<26;i++){
            char a='a';
            a=a+i;
            cout<<(char)a<<" "<<vec[i]<<endl;
        }
    }
};
int main(int argc, char const *argv[])
{   string str;
    getline(cin,str);
    count C;
    C.print(C.countstr(str));
    return 0;
}


