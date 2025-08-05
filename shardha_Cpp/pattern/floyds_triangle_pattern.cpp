#include<iostream>
using namespace std;
int main()
{
    int i,j,num,count=1;
    cout<<"Give the length of triangle : ";
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0;j<i+1;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}