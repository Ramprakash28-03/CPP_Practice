#include<iostream>
using namespace std; 
int main ()
{
    int i,j,num;
    cout<<"Give the length of the triangle : ";
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=i;k<num;k++){
            cout<<i+1;
        }
        cout<<"\n";

    }
    return 0;
}