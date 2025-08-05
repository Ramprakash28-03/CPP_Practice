#include<bits/stdc++.h>
using namespace std;
class countSetBits{
    public:
    countSetBits(int num){
        int count=0;
        while(num>0){
            if((num&1) == 1){
                count++;
            }
            num = num>>1;
        }
        cout<<count;
    }
};
int main(int argc, char const *argv[])
{
    countSetBits C(1048575);
    return 0;
}
