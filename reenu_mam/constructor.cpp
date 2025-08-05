#include<iostream>
#include<vector>
using namespace std;
class construct{
    public:
    int a ;
    int b ;
    construct(){
        cout<<"This is always executed when you call the class ";
    }
    construct(int n1,int n2){
        a = n1 ;
        b = n2;
        cout<< n1 + n2<<endl;
    }

};
int main(){
    construct C(10,20);
    //construct C2;
    
}