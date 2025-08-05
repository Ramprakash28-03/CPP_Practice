#include<iostream>
using namespace std;

double sum(double a, double b){
    double add = a+b;
    return add;
}
double greaters(double a, double b){
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    float num1,num2;
    cout<<"Give 1st num : ";
    cin>>num1;
    cout<<"Give the second num : ";
    cin>>num2;
    cout<<"The sum of the number is : "<<sum(num1,num2)<<"\n";
    cout<<"The greater number is : "<<greaters(num1,num2);
    return 0;
}
