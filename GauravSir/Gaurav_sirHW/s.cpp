#include<bits/stdc++.h>
using namespace std;
class check{
    public:
    bool isprime(int val){
        for(int i=2;val>i*i;i++){
            if(val%i==0){
                return false;
            }
        }
        return true;
    }

};
int main()
{
    vector<int> arr={1,3,-2,-1,-6,-8,-7,-11,-41};
    check c;
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            if(c.isprime(-arr[i])){
                count++;
            }
        }
        else{
            if(c.isprime(arr[i])){
                count++;
            }
        }
    }

    if(c.isprime(count)){
        cout<<"This count is prime ";
    }
    else{
        cout<<"This count is not prime";
    }
     
    
    return 0;
}

