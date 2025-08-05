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
// Derived class
class Ledtv: public Electronics{
    public:
    string model = "crystal 4k dynamic";
};
// Derived class(grand child)
class smartphone: public Ledtv{

};
int main(){
    Ledtv myled;
    myled.Tv();
    cout<<myled.model+" "+myled.brand;
    return 0;
}