#include<iostream>
#include<climits>
using namespace std;
class strongNum{
    public:
    int fact(int n){
        int ans = 1;
        while(n>0){
            ans *= n;
            n--;
        }
        return ans;
    }
    bool strongN(int num){
        int check = num,sum = 0;
        while(num>0){
            int digit = (num%10);
            sum += fact(digit);
            num = num/10;
        }
        if(sum == check){
            return true;
        }
        else return false;
    }
};
int main(){
    strongNum S;
    for(int i=1;i<=50000; i++){
        if(S.strongN(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}