#include<bits/stdc++.h>
using namespace std;
class constructor{
    public:
    constructor(){
        cout<<"Hi I am non paramaterized constructor\n";
    }
    constructor(int n,string name){
        cout<<"Hi I am paramaterized constructor\n";
        cout<<"User name is :"<<name;
        cout<<"\nAge is : "<<n;
        
    }
};
int main(int argc, char const *argv[])
{
    constructor C;
    constructor Cc(10,"devil");
    return 0;
}
