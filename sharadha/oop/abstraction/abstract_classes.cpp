#include<bits/stdc++.h>
using namespace std;
// Abstract class wahi class hogi jisme atleast one virtual funtion ho
// Abstract class ka hum object nahi banate wo kewal blue print hoti hai class ki
class shape{
    public:
    virtual void draw() = 0;//abstract class or pure virtural fuction
};
class circle : public shape{
    public:
    void draw(){
        cout<<"Draw the circle";
    }
};
class rec : public shape{
    public:
    void draw(){
        cout<<"\nDraw the rectrangle";
    }
};
int main(int argc, char const *argv[])
{
    circle C;
    rec r;
    // C.draw();
    // r.draw();
    return 0;
}

