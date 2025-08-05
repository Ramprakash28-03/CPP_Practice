#include<iostream>
#include<vector>
#include<iomanip> // this function is used for set limit of presion
using namespace std;
class NevenNum{
    public:
    bool NivNum(int n){
        int sum = 0;
        int check = n;
        while(n>0){
            sum += n%10;
            n /= 10;
        }
        if(check % sum == 0) return true;
        else return false;

    }
};
int main(){
    NevenNum N;
    for(int i = 1; i< 1000 ; i++){
        if(N.NivNum(i)){
            cout<<setprecision(10)<<i<<" ";
        }
    }
    return 0;
}
