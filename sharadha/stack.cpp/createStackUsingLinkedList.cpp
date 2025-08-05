#include<iostream>
#include<list>
using namespace std;
template <class t>
class Stack{
    list<t> ll;
    public:
    void push(t val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    bool isempty(){
       return ll.empty();
    }
    t top(){
        return ll.front();
    }
    int size(){
        return ll.size();
    }
};
int main(int argc, char const *argv[])
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
