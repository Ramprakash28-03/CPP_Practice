// The main difference between the function overloading and function overriding is 1.function overloading is compile time polymorphism where function overriding is runtime polymorphism
// 2. The function over loading is creating same name function in same class where function overridding creating same name function in different class 
#include<iostream>
using namespace std;
class parent{
    public:
    void show(){
        cout<<"Hi I am parent class";
    }
};
class child : public parent{
    public:
    void show(){
        cout<<"Hi I am child class ";
    }
};
int main(int argc, char const *argv[])
{
    child c;
    c.show();
    return 0;
}
