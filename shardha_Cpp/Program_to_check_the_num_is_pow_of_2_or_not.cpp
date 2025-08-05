#include<iostream>
using namespace std;
int powOfTwo(int num){
    if((num&(num-1)) == 0 )
    {
        cout<<"This is the number power of 2 ";
    }
    else
    cout<<"This is not the number power of 2  ";
}
int main(){
    int num;
    cout<<"Give the number to check that it is the number power of 2 : ";
    cin>>num;
    powOfTwo(num);
    return 0;
}