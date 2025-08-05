#include<iostream>

using namespace std;
class AutoMorphic{
    public:
    int square(int n){
        return n*n;
    }
    int digit(int n){
        int count = 1;
        while(n>0){
            count*=10;
            n /= 10;
        }
        return count;
    }
    bool checkAutoMorphicNumber(int n){
        int ans = square(n);
        int aa = digit(n);
        if(ans % aa == n)
        {
        return true;
        }
        else 
            return false;
    }
};
int main(){
    AutoMorphic A;
    for(int i=1; i<10000 ; i++){
        if(A.checkAutoMorphicNumber(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
