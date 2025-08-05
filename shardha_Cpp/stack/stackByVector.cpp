#include<iostream>
#include<vector>
using namespace std;
class stack{
    public:
        vector<int> v;

    void push(int val){
        v.push_back(val);
    }
     
    int top(){
       return v.back();
    }

    int pop(){
        v.pop_back();
    }

    void print(){
        for(int i = v.size()-1; i>=0; i--){
            cout<<v[i]<<" ";
        }
    }

};
int main(){
    stack S;
    S.push(10);
    S.push(20);
    S.push(30);
    S.print();
    return 0;
}