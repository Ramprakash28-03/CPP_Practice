#include<iostream>
#include<string>
using namespace std;
 
 class myclass{
    public :
    string mystring;
    float myfloat;
 };
 int main(){
    myclass myobj;
    myobj.mystring = "ram";
    myobj.myfloat = 12.33;
    cout<<myobj.myfloat<<endl;
    cout<<myobj.mystring;
 }