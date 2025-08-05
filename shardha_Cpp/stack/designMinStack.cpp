#include<bits/stdc++.h>
using namespace std;
class desighMinStack{
    public:
    stack<pair<int,int>> s;
    void push(int val){
        if(s.empty()){
        s.push({val,val});
        }
        else{
            s.push({val,min(val,s.top().second)});
        }
    }
    void pop(){
        s.pop();
    }
    int getMin(){
        return s.top().second;
    }
    int top(){
        return s.top().first;
    }
    bool isempty(){
        if(s.size()==0){
            return true;
        }
        else return false;
    }
};
int main(){
    desighMinStack D;
    D.push(10);
    D.push(11);
    cout<<D.top()<<endl;
    cout<<D.getMin()<<endl;
    return 0;
}