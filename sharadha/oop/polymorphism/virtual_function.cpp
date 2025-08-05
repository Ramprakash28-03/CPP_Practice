// The virtual funtion is member function that you expect to redefine in derived class
// virtual function ke liye compulsory hota hai ki child class usse duwara define kare
#include<iostream>
using namespace std;
class parent{
    public:
    void func1(){
        cout<<"Hi I am function one";
    }
    virtual void hello(){
        cout<<"Hi! I am parent class";
    }
};
class child : public parent{
    public:
    void hello(){
        cout<<"Hi ! I am child class";
    }
};
int main(int argc, char const *argv[])
{   
    child child1;
    parent *ptr;
    ptr = &child1;
    ptr->hello();
    return 0;
}

