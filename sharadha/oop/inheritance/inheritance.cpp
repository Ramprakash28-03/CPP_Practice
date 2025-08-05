#include<bits/stdc++.h>
using namespace std;
class animal{
    public:
    void breathe(){
        cout<<"Animal can breathe";
    }
    void eat(){
        cout<<"Animal can eat";
    }
    void see(){
        cout<<"animal can see";
    }
};
class monkey : public animal{
    public:
    void climb(){
        cout<<"Monkey can climb";
    }
    void jump(){
        cout<<"every monkey can jump";
    }
};
int main(int argc, char const *argv[])
{
    monkey M;
    M.jump();
    return 0;
}
