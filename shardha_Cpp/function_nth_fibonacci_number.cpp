#include<iostream>
using namespace std;
int fibonacciNum(int num){
    int zeroth_term = 0,first_term = 1, next_term=0;
    for(int i=0;i<num;i++){
        next_term = zeroth_term + first_term;
        zeroth_term = first_term;
        first_term=next_term;
        cout<<zeroth_term<<"  ";
    }
}
int main(){
    int num;
    cout<<"Give the term of fibonacci series : ";
    cin>>num;
    fibonacciNum(num);
    return 0;
}