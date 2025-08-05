#include<iostream>
using namespace std;
class customer{
    private:
    int Account;
    public:
    void setAccount(int a){
    Account=a;}

    int getAccount(){
    return Account;
    }

};
int main(){
    customer myObj;
    myObj.setAccount(54325);
    cout<<myObj.getAccount();
    return 0;
    
}
