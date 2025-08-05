#include<iostream>
using namespace std;
class A{
    void first(){
        cout<<"No argument ";
    }
    friend void second(A &obj);
};
void second(A &obj){
    obj.first();
}
class B{
    public:

};
int main(int argc, char const *argv[])
{
    A a;
    second(a);
    return 0;
}
