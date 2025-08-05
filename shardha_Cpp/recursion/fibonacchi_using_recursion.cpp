#include<iostream> 
using namespace std;
int fibonacchi(int n){
    if(n==1 || n==0){
        return n;
    }
    return fibonacchi(n-1)+fibonacchi(n-2);
}
int main(){
    cout<<fibonacchi(9);
    return 0;
}