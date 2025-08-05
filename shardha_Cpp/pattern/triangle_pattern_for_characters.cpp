#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    char ch='a';
    cout<<"Give the Size of the triangle : ";
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0;j<i+1;j++){
            cout<<ch<<" ";
            
        }ch=ch+1;
        cout<<"\n";
    }
}