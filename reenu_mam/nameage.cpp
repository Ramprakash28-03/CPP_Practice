//write the program code to implement encapsulation property  declare class as employee name,age
#include<iostream>
#include<string>
using namespace std;
class customer{
    private:
    string name;
    int age;
    public:
    void setAge(int a){
        age=a;
    };
    void setname(string a){
    name=a;}
    int getAge(){
        return age;
    };
    string getname(){
        return name;
    }
};
int main()
{
    customer myObj;
    myObj.setAge(20);
    myObj.setname("ram");
    cout<<myObj.getAge();
    cout<<myObj.getname();
    return 0;
}