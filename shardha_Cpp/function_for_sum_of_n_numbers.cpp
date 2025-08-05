#include<iostream>
using namespace std;
int sumOfNum(int start, int end){
    int sum=0;
    for(int i=start;i<=end;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int start ,end;
    cout<<"Give the start of num : ";
    cin>>start;
    cout<<"Give the end of num : ";
    cin>>end;
    cout<<"The sum of the number between the given limit is : "<< sumOfNum(start,end);
    return 0;
}