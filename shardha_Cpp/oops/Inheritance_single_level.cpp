/*
*Inheritance means the child class or derived class uses the property of the base class
There are five types of inheritance
1.single level inheritance 
2. Multilevel inheritance
3.Multiple inheritance
4.Hierarchical inheritance 
5.Hybrid inheritance
*/
// In this program we use single level inheritance 
#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    string dept = "Cyber Security";
    string name = "Pappu sen";
    string roll_no = "01125532553";
};
class B : public  A{
    public:
    string getName(){
        cout<<name;
        return name;
    }

};
int main(){
    B Be;
    Be.getName();
    return 0;
}