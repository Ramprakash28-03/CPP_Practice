#include<iostream>
#include<vector>
using namespace std;
class quick{
    public:
    int partition(vector<int>& vec,int st,int end){
        int i=st-1;
        int pivot = vec[end];
        for(int j=st;j<end;j++){
            if(vec[j]<=pivot){
                i++;
                swap(vec[i],vec[j]);
            }
        }i++;
        swap(vec[i],vec[end]);
        return i;
    }
    void helper(vector<int>& vec,int st,int end){
            if(st>=end){
                return;
            }
                int pivotIdx = partition(vec,st,end);
                helper(vec,st,pivotIdx-1);
                helper(vec,pivotIdx+1,end);
    }
    void quickSort(vector<int>& vec){
        helper(vec,0,vec.size()-1);
    }
};
int main(int argc, char const *argv[])
{
    vector<int> vec = {0,4,1,2,3,8,3,7};
    quick Q;
    Q.quickSort(vec);
    for(int val:vec){
        cout<<val<<" ";
    }
    return 0;
}
