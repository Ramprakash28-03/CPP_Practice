#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    string name = "sarukh";
    string dept = "MBA";
    int age = 53;
};
class B : public A{
    public:
    B(){
        cout<<"This is first child class ";
    }
};
class C : public A {
    public:
    C(){
        cout<<"This is second class ";
    }
};
 
int main(){
    C second;
    cout<<second.age;
    return 0;
}