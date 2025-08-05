#include<iostream>
#include<vector>
#include<map>
using namespace std;
bool reverse(int num){
    int cpy_num = num;
    int rev=0;
    while(num>0){
        rev*=10;
        rev += num%10;
        num=num/10;
    }
    if(rev == cpy_num){
        return true;
    }
    else return false;
}
bool prime(int num){
    if(num<2)
    return false;
    for(int i=2; i*i<num;i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}
int sum_freq(vector<int> &arr){
    map<int,int> m;
    for(int i=0; i<arr.size(); i++){
        if(m.find(arr[i]) == m.end()){
            m[arr[i]]=0;
        }
    }
    for(int i=0; i<arr.size();i++){
        m[arr[i]] = m[arr[i]]+1;
    }
     int sum=0;
    for(const auto& pair : m){
        if(pair.second>1){
            int val = pair.first*pair.second;
            sum += val ;
        }
    }
    return sum;
}
int main(){
    vector<int> arr={1,1,2,33,43,1,2,3,3,3,3};
    int n=sum_freq(arr);
    if(n%2==0){
        cout<<reverse(n);
    }
    else{
        cout<<prime(n);
    }
    return 0;

}
