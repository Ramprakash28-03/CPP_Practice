#include<iostream>
#include<string>
using namespace std;
class Encapsulation{
    private:      // the data type we can not access it directly from out of class
   string name ;
   int age;
    public:
    void setName(string a){
        name=a;
    }
    void setAge(int a){
        age=a;
    }
    // accessing the data type using other function
    int getAge(){
        return age;
    }
    string getName(){
        return name;
    }
};
int main(){
    Encapsulation E;
    E.setAge(21);
    E.setName("Ram prakash Gupta");
    cout<<"The Name is : "<<E.getName()<<endl;
    cout<<"The Age is : "<<E.getAge();
    return 0;
}