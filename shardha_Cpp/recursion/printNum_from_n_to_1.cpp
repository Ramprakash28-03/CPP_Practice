#include<iostream>
using namespace std;
void print_nums(int n){
    if(n==1){
        cout<<1;
        return ;
    }
    cout<<n<<endl;
    print_nums(n-1);

}
int main(){
    print_nums(33);
    return 0;
}