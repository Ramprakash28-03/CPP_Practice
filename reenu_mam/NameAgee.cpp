#include<iostream>
#include<string>
using namespace std;
class customer{
    private:
    int Age;
    string Name;
    public:
    void setAge(int a){
        Age=a;
    }
    void setName(string a){
        Name=a;
    }
    int getAge(){
        return Age;
    }
    string getName(){
        return Name;
    }
};
int main(){
    customer myObj;
    myObj.setAge(12);
    myObj.setName("ramram");
    cout<<myObj.getName();
    cout<<myObj.getAge();
    return 0;
}