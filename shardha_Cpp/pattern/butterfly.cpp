#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"give the length of butterfly : ";
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0;j<=i;j++){
            cout<<"*";

        }
        for(j=0;j<2*(num-i)-3;j++){
            cout<<" ";
        }
        for(j=0;j<i+1;j++){
            if( j != num-1){ 
                cout<<"*";
            }
        }
        cout<<"\n";
    }
       for(i=0;i<num-1;i++){
        for(j=0;j<num-i-1;j++){
            cout<<"*";

        }
        for(j=0;j<2*i+1;j++){
            cout<<" ";
        }
        for(j=0;j<num-i-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}