#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class unSortedActivityEnd{
    public:
    // This function is used for comparing logic in sorting
    static bool compare(pair<int,int> p1,pair<int,int> p2){
        return p1.second<p2.second;
    }
    int ActivityCount(vector<int>& st,vector<int> &end){
        vector<pair<int,int>> p(st.size(),make_pair(0,0));
        for(int i=0;i<st.size();i++){
            p[i].first=st[i];
            p[i].second=end[i];
        }
        sort(p.begin(),p.end(),compare);
        int endActivity=p[0].second,count=1;
        for(int i=1;i<p.size();i++){
            if(endActivity<=p[i].first){
                count++;
                endActivity=p[i].second;
            }
        }
        return count;
    }
};
int main(int argc, char const *argv[])
{   vector<int> st={0,1,3},end={9,2,4};
    unSortedActivityEnd U;
    cout<<U.ActivityCount(st,end);
    return 0;
}
