//Create a user class with properties : id(private), username(public), & password(private). its id should be intialized in parameterized constructor . It should have getter and setter for password
#include<bits/stdc++.h>
using namespace std;
class practice{
    string passwd;
    string id;
    public:
    string userName;
    // setter
    void setId(string id){
        this->id=id;
    }
    void setPasswd(string passwd){
        this->passwd = passwd;
    }
    //getter
    string getId(){
        return id;
    }
    string getPasswd(){
        return passwd;
    } 
};
int main(int argc, char const *argv[])
{
    practice P;
    P.userName = "Ram Prakash Gupta";
    P.setId("ramgupta2645");
    P.setPasswd("1234abcd");
    cout<<P.getId()<<endl;
    cout<<P.getPasswd();
    return 0;
}
