#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int max_sum(vector<int> &vec){
    int size=vec.size(), maxx_sum=-10000;
    for(int start=0;start<size;start++){
        int curr_sum= 0;
        for(int end=start;end<size;end++){
            curr_sum+=vec[end];
            maxx_sum= max(curr_sum,maxx_sum);
        }
    }
    return maxx_sum;
}
int main(){
    vector<int> arr={3,-4,5,4,-1,7,-8};
    cout<<"The max sum of given array is : "<<max_sum(arr)<<"\n";
    return 0;
}
