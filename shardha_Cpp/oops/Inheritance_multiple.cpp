#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    string name="Abdul Kalam ";
    int age = 110;
};
class B{
    public:
    string dept="Computer Science ";
    int roll_no = 1234567890;
};
class C : public A, public B{
    public:
    C(){
    cout<<"mere class me kuch bhi nahi hai \n";
    }
};
int main(){
    C multi;
    cout<<multi.dept;
    return 0;
}
