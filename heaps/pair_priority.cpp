#include<bits/stdc++.h>
using namespace std;
struct comparePair{
    bool operator ()  (const pair<string,int> &p1, const pair<string,int> &p2) const{
        return p1.second < p2.second;
    }
};
int main()
{
    priority_queue<pair<string,int>,vector<pair<string,int>>,comparePair> p;
    p.push(make_pair("Ram",98));
    p.push(make_pair("King",100));
    p.push(make_pair("Raja",99));
    while(!p.empty()){
        cout<<p.top().first<< "->" <<p.top().second<<endl;
        p.pop();
    }
    return 0;
}
