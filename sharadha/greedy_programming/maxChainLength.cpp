#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class maxchain{
    public:
    int longestChain(vector<pair<int,int>> m){
        sort(m.begin(),m.end(),[](pair<int,int> p1,pair<int,int> p2){return p1.second<p2.second;});//This is call lambda function
        int ans=1,endlength=m[0].second;
        for(int i=1;i<m.size();i++){
            if(m[i].first>endlength){
                ans++;
                endlength=m[i].second;
            }
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    vector<pair<int,int>> p;
    p.push_back({5,24});
    p.push_back({39,60});
    p.push_back({5,28});
    p.push_back({27,40});
    p.push_back({50,90});
    maxchain m;
    cout<<m.longestChain(p);

    return 0;
}
