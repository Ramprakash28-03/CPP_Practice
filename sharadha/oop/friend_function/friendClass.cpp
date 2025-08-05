#include<iostream>
using namespace std;
class A{
    void kuchBhi(){
        cout<<"kuch Bhi";
    }
    friend class B;
};
class B {
    public:
    void showOUtput(A &b){
        b.kuchBhi();
    }
};
int main(int argc, char const *argv[])
{   A a1;
    B b;
    b.showOUtput(a1);
    return 0;
}
