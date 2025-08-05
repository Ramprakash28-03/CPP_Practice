#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class stockSpan{
    public:
   vector<int> span(vector<int> &vec){
        stack<int> s;
        vector<int> ans(vec.size(),0);
        ans[0]=1;
        s.push(0);
        for(int i=1;i<vec.size();i++){
            while(!s.empty() && vec[s.top()]<=vec[i]){
                s.pop();
            }
            if(s.empty()){
                ans[i]=i+1;
            }else ans[i]=i-s.top();
            s.push(i);
        }
        return ans;

    }
};
int main(int argc, char const *argv[])
{
    vector<int> vec={100,80,60,70,60,85,100};
    stockSpan ss;
    for(int val:ss.span(vec)){
        cout<<val<<" ";
    }
    return 0;
}



    // stack<pair<int, int>> s;
    // int next(int price) {
    //     int res = 1;
    //     while (!s.empty() && s.top().first <= price) {
    //         res += s.top().second;
    //         s.pop();
    //     }
    //     s.push({price, res});
    //     return res;
    // }