#include<iostream>
using namespace std; 
int main(){
    int i,j,num;
    cout<<"Give the length of pyramid : ";
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0;j<num-i;j++){
            cout<<" ";

        }
        for(j=1;j<i+2;j++){
            cout<<j;
        }
        for(j=i;j>0;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}