#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;
int romanToInt(string str){
    unordered_map<char,int> m;
    int n=str.length(),sum=0;
    m = {   {'I',1},
    {'V',5},
    {'X',10},
    {'L',50},
    {'C',100},
    {'D',500},
    {'M',1000}    };
    int prevalue=0;
    for(int i=n-1;i>=0;i--){
        int curValue=m[str[i]];
        if(curValue<prevalue){
            sum-=curValue;
        }
        else
        {
            sum+=curValue;
        }
        prevalue=curValue;
    }
    return sum;
}
int main(){
    string str="DIC";
   cout<<romanToInt(str);
   return 0;
}