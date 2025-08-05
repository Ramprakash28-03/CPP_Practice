#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
string rev_word(string a){
    reverse(a.begin(),a.end());
    int start=0;
    int n=a.size();
    for(int i=0;i<a.size();i++){
        if(a[i]==' '){
            int end=i-1;
        while (start<end)
        {
            swap(a[end],a[start]);
            start++;
            end--;
        }
        
        
        start=i;

    }
}
    return a;
}
int main(){
    string a;
    cout<<"Give the name : ";
    getline(cin,a);
    int start=0;
    int n=a.size();
    cout<<rev_word(a);

    return 0;
    
    }
