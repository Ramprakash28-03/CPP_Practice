#include<iostream>
#include<vector>
using namespace std;
class mean{
    public:
    mean(int n){
        float sum =0;
        for(int i=0;i<n;i++){
            float num;
            cin>>num;
            sum += num;
        }
        cout<<"the mean : " <<sum/n;
    }
};
int main(){
    mean M(5);
    return 0;

}