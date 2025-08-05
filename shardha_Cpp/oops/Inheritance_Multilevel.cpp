#include<iostream>
#include<string>
using namespace std;
class A{
    public :
    string dept="Engineering";
    string sub = "Cyber Security";
    int roll_no = 12;
    string DoB = "12-12-12";
};
class B : public A{
    public:
    B(){
        cout<<"This is B class \n";
    }

};
class C : public B{

};
int main(){
    C third;
    cout<<third.sub;
    return 0;
}