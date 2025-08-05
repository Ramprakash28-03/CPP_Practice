#include<iostream>
#include<vector>
using namespace std;
class fact{
    int multiply(int x,int res_size,vector<int>& res){
        int carry=0;
        for(int i=0;i<res_size;i++){
            int prod=x*res[i]+carry;
            carry=prod/10;
            res[i]=prod%10;
        }
        while(carry){
            res[res_size]=carry%10;
            carry=carry/10;
            res_size++;
        }
        return res_size;
    }
    public:
    fact(int n){
        vector<int> res(500,0);
        res[0]=1;
        int res_size=1;
        for(int i=2;i<=n;i++){
            res_size=multiply(i,res_size,res);
        }
        for(int i=res_size-1;i>=0;i--){
            cout<<res[i];
        }
    }
};
int main(int argc, char const *argv[])
{
    fact f(100);
    
    return 0;
}
