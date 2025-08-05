#include<iostream>
using namespace std;
class printNum{
    public:
    void from1toN(int n){
        if(n==0){
            return;
        }
        from1toN(n-1);
        cout<<n<<" ";
    }
    void fromNto1(int n){
        if(n==0){
            return ;
        }
        cout<<n<<" ";
        fromNto1(n-1);
    }
};
int main(int argc, char const *argv[])
{
    printNum p;
    p.fromNto1(30);

    return 0;
}
