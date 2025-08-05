#include<bits/stdc++.h>
using namespace std;
class getBits{
    public:
    getBits(int num,int idx){
        cout<< (num & (1<<idx));
    }
};
int main(int argc, char const *argv[])
{
    getBits B(2309,10);
    return 0;
}
