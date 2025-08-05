#include<iostream>
using namespace std;
class neonNum{
    public:
    int digSqr(int num){
        return num * num;
    }
    bool neoN(int n){
       int mul = n*n;
       int sum = 0 ;
        while(mul>0){
            sum += (mul % 10);
            mul /= 10;
        }
        if(sum == n){
            return true;
        }
        else return false;
    }
};
int main(){
    neonNum N;
    for(int i=0; i<1000; i++ ) {
        if(N.neoN(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}