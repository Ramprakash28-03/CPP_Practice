#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    char ch='A';
    cout<<"Give the side of square : ";
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<"\n";
    }
    return 0;
}