#include<iostream>
using namespace std;
int primePrint(int start,int end){
    for(int i=start; i<=end; i++){
        bool is_prime = true;
        for(int j=2;i>=j*j;j++){
            if(i%j == 0){
                is_prime=false;
                break;
            }
        } if(is_prime == true){
                cout<< "Prime number is : "<<i<<"\n";
            }
    }
}
int main(){
    int start ,end;
    cout<<"Give the starting range of prime number : ";
    cin>>start;
    cout<<"Give the end range of prime number : ";
    cin>>end;
    primePrint(start,end);
    return 0;
}