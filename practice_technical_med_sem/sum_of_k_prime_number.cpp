#include<iostream>
#include<climits>
#include<vector>
using namespace std;
class sum_primes{
    public:
    bool prime(int val){
        if(val<2){
            return false;
        }
        for(int i=2;val>=i*i;i++){
            if(val%i == 0){
                return false;
            }
        }
        return true;
    }
    public:
    int sum_arr_prime(vector<int> arr){
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(prime(arr[i])){
                sum+=arr[i];
            }
        }
        return sum;
    }
};
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,-5,11};
    sum_primes myObj;
    int ans = myObj.sum_arr_prime(arr);
    cout<<ans;
    return 0;
}
