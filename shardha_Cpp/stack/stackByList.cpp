#include<iostream>
#include<list>
using namespace std;
class stack{
    list<int> ll;
    public:
    void push(int val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_back();
    }

    int top(){
       return  ll.front();
    }

    void print(){
        for(int val : ll){
            cout<<val<<" ";
        }
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(233);
    s.print();
    return 0;
}