#include<bits/stdc++.h>
using namespace std;
class evenOdd{
    public:
    evenOdd(int num){
        if(num&1 == 1){
            cout<<"Odd";
        }else
        {
            cout<<"Even";
        }
    }
};
int main(int argc, char const *argv[])
{
    evenOdd e(2490);
    return 0;
}
