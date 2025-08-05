#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
class jobSecquencing{
    public:
    int maxProfit(vector<pair<int,int>> p){
        // hum jo ye [] square parentheses use kar karte hai sort wo kahlata hai capture list
        sort(p.begin(),p.end(),[](pair<int,int> p1,pair<int,int> p2){return p1.second>p2.second;});
        set<int> s;
        s.insert(p[0].first);
        int profit=p[0].second;
        for(int i=1;i<p.size();i++){
            if(s.find(p[i].first) == s.end()){
                profit+=p[i].second;
                s.insert(p[i].first);
            }
        }
        return profit;
    }
};
int main(int argc, char const *argv[])
{
    vector<pair<int,int>> p={make_pair(1,40),make_pair(2,10),make_pair(4,20),make_pair(1,30)};
    jobSecquencing j;
    cout<<"The max profit is : "<<j.maxProfit(p);
    return 0;
}
