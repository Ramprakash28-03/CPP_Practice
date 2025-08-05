#include<bits/stdc++.h>
using namespace std;
class complexx{
    public:
    int real ;
    int img;
    void setNum(int real,int img){
        this->img = img;
        this->real = real;
    }
    void getNum(){
        cout<<real<<" + "<<img<<"i";
    }
    void operator +(complexx &c2){
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img;
        complexx c3;
        c3.setNum(resReal,resImg);
        c3.getNum();
    }
};
int main(int argc, char const *argv[])
{
    complexx c;
    c.setNum(10,3);
    complexx c3;
    c3.setNum(3,32);
    c+c3;
    //c.getNum();
    return 0;
}
