#include<iostream>
using namespace std;
int power(int number,int power){
    int ans=1;
    for(int i=0;power>0;i++){
        if(power%2 ==1){
            ans*=number;
        }
        number*=number;
        power/=2;
    }
    return ans;
}
int main(){
    int num,pow;
    cout<<"Give the number : ";
    cin>>num;
    cout<<"Give the power : ";
    cin>>pow;
    cout<<"The answer is : "<<power(num,pow);
    return 0;
}