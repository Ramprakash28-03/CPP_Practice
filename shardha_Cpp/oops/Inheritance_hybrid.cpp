/*
This is the mixture of all types of inheritance
*/
#include<iostream>
#include<string>
using namespace std;
class test{
    public:
    string roll_no = "01CY2020";
};
class A{
    public:
    int age = 10;
    string name = "Any name ";
    string dept = "Computer science";
};
class B : public A{
    //single level inheritance
    public:
    string gender ="M | F";
};
class C : public B{
    //multilevel inheritance
};
class D : public A{
    //Hierarchical inheritance
};
class E : public C, public test{
    //Multiple inheritance with hybrid inheritance 
};
int main(){
    E fifth;
    cout<<fifth.roll_no;
    return 0;
}