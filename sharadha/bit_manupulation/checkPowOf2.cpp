#include<bits/stdc++.h>
using namespace std; 
class powOf2{
    public:
    powOf2(int num){
        if((num & (num-1)) == 0){
            cout<<"This is in the form of pow of 2";
        }
        else{
            cout<<"This is not in the power of 2";
        }
    }
};
int main(int argc, char const *argv[])
{
    powOf2 P(1048576);
    return 0;
}
