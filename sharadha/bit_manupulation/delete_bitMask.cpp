#include<bits/stdc++.h>
using namespace std;
class deleteBitMask{
    public:
    string s;
    float f;
    deleteBitMask(){
        cout<<"Hi I am constructor";
    }
    deleteBitMask(int num, int idx){
        //cout<<(num & (~(1<<idx)));
    }
    //~deleteBitMask();
};
int main(int argc, char const *argv[])
{   deleteBitMask B;
    cout<<sizeof(B);
    return 0;
}
