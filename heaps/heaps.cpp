#include<iostream>
#include<vector>
#include<string>
using namespace std;
template <typename t>
class heap{
    vector<t> vec;
    void heapify(int n){
        // if(n>=vec.size()){
        //     return;
        // }
        int maxI = n;
        int rC = 2*n+2;
        int lC = 2*n+1;
        if(lC<vec.size() && vec[lC]>vec[maxI]){
            maxI = lC;
        }else if(rC<vec.size() && vec[rC]>vec[maxI]){
            maxI = rC;
        }
        swap(vec[n],vec[maxI]);
        if(maxI != n){
            heapify(maxI);
        }
    }
    public:
    void push(t a){
        vec.push_back(a);
        int child = vec.size()-1;
        int parent = (child-1)/2;
        while (vec[child]>vec[parent])
        {
            swap(vec[child],vec[parent]);
            child = parent;
            parent = (child-1)/2;
        } 
    }
    t top(){
        return vec[0];
    }
    void pop(){
        if(vec.size() == 0){
            return;
        }
        swap(vec[0],vec[vec.size()-1]);
        vec.pop_back();
        heapify(0);

    }
    void print(){
        while(!vec.empty()){
            cout<<top()<<" ";
            pop();
        }
    }
    bool empty(){
        return vec.size()==0;
    }
};

int main(){
    heap<int> H;
    H.push(10);
    H.push(20);
    H.push(2);
    H.push(21);
    H.push(25);
    H.push(3);
    H.print();
    H.pop();
    return 0;
}