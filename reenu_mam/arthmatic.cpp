#include<iostream>
#include<string>
using namespace std;
 
 class arthmatic{
    public :
   
    float plus(int num1,int num2){  num1+num2; cout<<num1+num2;}
    float avg  ;
    float minus;
 };
 int main(){
    arthmatic myobj;
    myobj.plus(3.5,5.6);

    return 0;
 }