#include<iostream>
using namespace std;
int primeNum(int num){
    bool is_prime = true;
    for(int i=2;num>=i*i;i++){
        if(num%i == 0){
            is_prime=false;
            break;
        }

    }
    if(is_prime==true ){
        cout<<"This is prime number ";
    }
    else 
    cout<<"This is not prime number";
}
int main()
{
    int num;
    cout<<"Give the number to check it is prime or not : ";
    cin>>num;
    primeNum(num);
    return 0;
}