#include<iostream>
#include<string>
using namespace std;
bool freq_check(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}
bool isStringPresent(string str1,string str2){
    int freq[26]={0};
    for(int i=0;i<str1.length();i++){
        freq[str1[i]-'a']++;
    }
    int window_length=str1.length();
    for(int i=0;i<str2.length();i++){
        int wIndex=0,idx=0,windfreq[26]={0};
        while(wIndex<window_length && idx<str2.length()){
            windfreq[str2[idx]-'a']++;
            wIndex++;idx++;
        }
        if(freq_check(windfreq,freq)==true){
            return true;
        }

    }
    return false;
}
int main(){
    string s1,s2;
    cin>>s2;
    cin>>s1;
    cout<<isStringPresent(s1,s2);
    return 0;
}