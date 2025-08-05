#include<bits/stdc++.h>
using namespace std;
// If we can not create any copy constructor in cpp the program automatically create the constructor
class copyConstructor{
    public:
    int age;
    string name;
    int salary;
    copyConstructor(int age, string name , int salary ){
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
    copyConstructor(copyConstructor &original){
        cout<<original.age<<endl;
        this->name = original.name;
    }
};
int main(int argc, char const *argv[])
{
    copyConstructor C(23,"Vikesh",100000000);
    copyConstructor C2(C);
    cout<<C2.name;
    cout<<C2.salary;
    cout<<"\nafter compilation";
    return 0;
}
