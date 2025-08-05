// this library stores the unique elements and saves only one times of the repeated elements and this stores the element in sorted order
// The complexity of insertion of element is o(n)
#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Set{
    public:
    set<int> A(vector<int> elements){
        set<int> b;
        for(int i=0;i<elements.size(); i++){
            b.insert(elements[i]);
        }
        return b;
    }

};
int main(){
    vector<int> elements{95,2,3,4,1,2,6,6,4,2,6,4,4,6,5};
    Set Myset;
    set<int> ans = Myset.A(elements);
    for(int val : ans){
        cout<<val<<" ";
    }
    return 0;
}