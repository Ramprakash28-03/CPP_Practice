#include<iostream>
using namespace std; 
int main()
{
    int i,j,num;
    cout<<"give the length of diamond : ";
    cin>>num;
    for(i=0;i<num;i++){
        for(j=1;j<num-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i>0){
        for(j=0;j<(2*i)-1;j++){
            cout<<" ";
        }
        cout<<"*";
       
        } cout<<"\n";
    }
     for(i=0;i<num-1;i++){
        for(j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        for(j=0;j<2*(num-i)-5;j++){
            cout<<" ";
        }
        if(i != num-2)
       { cout<<"*";}
       
         cout<<"\n";
    }

    return 0;
}