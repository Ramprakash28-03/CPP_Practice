#include<iostream>
using namespace std; 
int main(){
    int i,j,num;
    cout<<"give the number : ";
    cin>>num;
    for (i=0;i<num;i++){
        for(j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}