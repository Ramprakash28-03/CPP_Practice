#include<iostream>
using namespace std;
int main(){
    int num,i,sum=0;
    cout<<"Give the Number : ";
    cin>>num;
    for(i=3;i<=num;i++){
        if(i % 3 == 0){
            cout<<i<<"  ";
            sum=sum+i;
        }
    }
    cout<<"The sum of n number divide by 3 is : "<<sum;
    return 0;
}