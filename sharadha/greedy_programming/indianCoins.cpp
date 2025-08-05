#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class indianCoin{
    public:
    int countIndianCoin(vector<int> rupees,int n){
        int ans=0;
        for(int i=rupees.size()-1;i>=0;i--){
            int a;
            a=n/rupees[i];
            ans+=a;
            n=n%rupees[i];
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    vector<int> currency={1,2,5,10,20,50,100,500,2000};
    indianCoin I;
    cout<<"Number of notes are: "<<I.countIndianCoin(currency,1200);
    return 0;
}
