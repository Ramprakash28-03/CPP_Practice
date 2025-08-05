// Multilevel inheritence
#include<iostream>
#include<string>
using namespace std;
// base class 
class Electronics{
    public: 
    string brand= "Samsung";
    void Tv(){
        cout<<"Great picture quality\n";
    }
};
// child class
class