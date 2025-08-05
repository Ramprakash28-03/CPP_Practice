// There are two types of copy constructor
// 1. shallow copy construtor :- this constructor gives different answer in runtime or dynamic allocation but gives right answer in compile time .
// 2. Deep Copy Constructor :- this constructor give correct answer in runtime and compile time both because it creates an extra copy in the memory
// here is the shallow copy constructor
#include<iostream>
#include<string>
using namespace std;
class Constructor{
    public:
    int Age;
    int Roll_no;
    string Name;
    Constructor(int age,int roll_no, string name){
        Age=age;
        Roll_no = roll_no;
        Name = name;
    }
};
int main(){
    Constructor C(10,111,"ram prakash Gupta");
    Constructor C2(C);
    cout<<C2.Age;
    return 0;
}
