#include<iostream>
using namespace std;
int main()
{
    int num,i,j,count=0,prime=2,sum=0;
    cout<<"Give the number ";
    cin>>num;
    for(i=2;count<num;i++){
        bool is_prime =true;
        for(j=2;j*j<=i;j++){
            if(i%j == 0){
                is_prime=false;
                break;
            }
        }
        if(is_prime == true){
            count++;
            prime=i;
            //cout<<"The "<<count<<" prime number is : " <<prime<<"\n";
          //  sum=sum+prime;
        }
    }
    cout<<"The "<<count<<" prime num is : "<<prime;
    return 0;
}