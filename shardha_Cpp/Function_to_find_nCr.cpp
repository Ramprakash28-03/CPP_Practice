#include<iostream>
using namespace std;
long long  fact(int num){
    long long int ans=1;
    for(int i=num;i>0;i--){
        ans*=i;
        cout<<ans<<" ";
    }
    return ans;
}
int main(){
    long int n,r;
    long double nCr;
    cout<<"Give the value of n : ";
    cin>>n;
    cout<<"Give the value of r : ";
    cin>>r;
    nCr=fact(n)/(fact(r)*fact(n-r));
    cout<<"The combination of the given problem is : "<<nCr;
}