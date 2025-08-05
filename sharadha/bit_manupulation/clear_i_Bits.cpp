#include<bits/stdc++.h>
using namespace std;
class clear_i_Bits{
    public:
    clear_i_Bits(int num,int idx){
        num = num & ((~0)<<idx);
        cout<<num;
    }
};
int main(int argc, char const *argv[])
{
    clear_i_Bits C(15,3);
    return 0;
}
