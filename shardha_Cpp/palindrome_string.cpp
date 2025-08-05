#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str ;
    getline(cin,str);
    reverse(str.begin(),str.end());
    cout<<"The reverse string is : "<<str<<endl;
    cout<<INT_MIN;
    return 0;

}