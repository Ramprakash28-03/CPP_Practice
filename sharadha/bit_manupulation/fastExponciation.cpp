#include<iostream>
using namespace std;
class expo{
    public:
    expo(int num,int pow){
        int ans=1;
        while(pow>0){
            if((pow&1) == 1){
            ans *= num;
        }
        num *= num;
        pow=pow>>1;
    }
    cout<<ans;
        
    }
};
int main(int argc, char const *argv[])
{
    expo e(2,15);
    return 0;
}
