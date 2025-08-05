#include<bits/stdc++.h>
using namespace std;
class setBits{
    public:
    setBits(int num,int idx){
        cout<<(num | (1<<idx));
    }
};
int main(int argc, char const *argv[])
{
    setBits B(6,3);
    return 0;
}
