#include<bits/stdc++.h>
using namespace std;
class setBitsAsPerRequirement{
    public:
    setBitsAsPerRequirement(int num,int idx,int val){
        num = num & ~(1<<idx);
        num = num | (val<<idx);
        cout<<num;
    }
};
int main(int argc, char const *argv[])
{
    setBitsAsPerRequirement B(16,3,1);
    return 0;
}
