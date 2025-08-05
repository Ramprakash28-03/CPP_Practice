#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"Give the number : ";
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0;j<i+1;j++)
        cout<<"*";
        cout<<"\n";
}
    return 0;
}