#include<iostream>
using namespace std;
class pronic{
    public:
    int proNum(int n){
        if(n>0) 
        return n*(n-1);
        else return -1;
    }
};
int main(){
    pronic P;
    for(int i = 1; i<10; i++){
        cout<<"The "<<i<<" pronic number : "<<P.proNum(i)<<"\n";
    }
    return 0;
}