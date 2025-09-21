#include<iostream>
#include<queue>
using namespace std;
class pq{
    protected:
    priority_queue<int> pq;
};
class A:protected pq{
    public:
    void print(){
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
    }

    void p(int num){
        pq.push(num);
    }
};

int main(){
    A a;
    a.p(10);
    a.p(2);
    a.p(19);
    a.p(221);
    a.p(129);
    a.p(0);
    a.print();
}