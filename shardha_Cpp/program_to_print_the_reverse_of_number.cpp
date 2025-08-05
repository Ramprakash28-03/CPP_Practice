#include<iostream>
#include<math.h>
using namespace std;
int reverseNum(int num){
    int rem,count=0,rev;
    for(int i=0;num>0;i++){
        rem=num%10;
        num=num/10;
        count=(count*10) + rem;
    }
    rev=count;
    return rev;
}
int main(){
    int num;
    cout<<"Give the num to print reverse : ";
    cin>>num;
    cout<<"The reverse of the number is  : "<<reverseNum(num);
    return 0;
}
