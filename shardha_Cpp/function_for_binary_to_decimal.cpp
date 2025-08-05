#include<iostream>
using namespace std; 
int decimal(int binNum){
    int decima_num=0,dnum,pow=1;
    for(int i=0;binNum>0;i++){
        dnum = binNum%10;
        binNum=binNum/10;
        decima_num=decima_num+(dnum*pow);
        pow=pow*2;
    }
    cout<<"The decimal for binary is : "<<decima_num;
}
int main(){
    int num; 
    cout<<"Give the binary number to convert it to decimal : ";
    cin>>num;
    decimal(num);
    return 0;
}