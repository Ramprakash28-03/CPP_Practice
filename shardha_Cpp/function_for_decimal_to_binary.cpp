#include<iostream>
using namespace std;
int binary(int num){
    int pow=1,biNum=0,final_b_num=0;
    for(int i=0;num>0;i++){
        biNum=num%2;
        num=num/2;
        final_b_num=final_b_num+(pow*biNum);
        pow=pow*10;
    }
  cout<<"The binary of given decimal number : "<<final_b_num;
}
int main(){
    int num;
    cout<<"Give the decimal number : ";
    cin>>num;
    binary(num);
    return 0;
}