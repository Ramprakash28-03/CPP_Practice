//Abstraction means hiding the unnecessary detail and showing only use ful details we are already using the abstraction the previous code
#include<iostream>
#include<string>
using namespace std;
class A{
    private: 
    int age = 23;
    string  hobby = "dancing ";
    public : 
    string name = "Vikash Mental";
    string roll_no = "102030";
    void NandR(){
        cout<<name<<endl;
        cout<<roll_no<<endl;
    }
    
};
int main(){
    A Abs;
    Abs.NandR();
    return 0;
}
