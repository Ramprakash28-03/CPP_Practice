#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
class facinatingNum{
    public:
    bool checkfac(string A){
        // int i=0;
        // while(A[i] != '0'){
        //     i++;
        // }
        if(A == "123456789" ){
            return true;
        }
        else return false;
    }
    void prtFac(int n){
        string A = to_string(n) + to_string(2*n) + to_string(3*n);
        sort(A.begin(),A.end());
        if(checkfac(A)){
            cout<<n<<" ";
        }
    }
};
int main(){
    facinatingNum F;
    for(int i=100; i<1000; i++){ 
        F.prtFac(i);
    }
    return 0;
}