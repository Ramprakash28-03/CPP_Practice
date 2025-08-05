#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;
template <class t>
class Stack{
    vector<t> vec;
    public:
    void push(t val){
        vec.push_back(val);
    }
    void pop(){
        vec.pop_back();
    }
    t top(){
        return vec.back();
    }
    int size(){
        return vec.size();
    }
    bool isempty(){
        if(vec.size()==0) return true;
        return false;
    }
    void print(){
        for(int i=vec.size()-1;i>=0;i--){
            cout<<vec[i]<<" ";
        }
    }
};
int main(int argc, char const *argv[])
{
    
    stack<string> st,s;
    s.push("Name");
    s.push("mera");
    s.push("hai");
    s.push("Ram");
    st.push("1");
    st.push("2");
    st.swap(s);
    while(st.empty() != true){
        cout<<st.top()<<" ";
        st.pop();
    }
    

   // cout<<s.top()<<endl;
    return 0;
}
