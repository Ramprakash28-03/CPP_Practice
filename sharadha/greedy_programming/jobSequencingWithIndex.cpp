#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// kabhi kabhi humhe sorting karte samay multiple values ek sath rakhni pade to hum uska object bana le ge 
class jobs{
    public:
    int idx,deadline,profit;
    jobs(int idx,int deadline, int profit){
        this->idx=idx;
        this->deadline=deadline;
        this->profit=profit;
    }
};
class JobSecquencingVariation{
    public:
   int  jobSeq(vector<pair<int,int>> p){
    vector<jobs> j;
    for(int i=0;i<p.size();i++){
// push_back() me problem ye aayegi ki hume pahele jo class hai uska object banana padega par EMPLACE_BACK se hum apna pura kaam compiler ko dedete hai
        j.emplace_back(i,p[i].first,p[i].second);
    }
    for(int i=0;i<j.size();i++){
        cout<<j[i].idx<<" "<<j[i].deadline<<" "<<j[i].profit<<endl;
    }
    return 0;
   }
};
int main(int argc, char const *argv[])
{
    vector<pair<int,int>> p={make_pair(1,40),make_pair(1,30),make_pair(1,20),make_pair(4,20)};
    JobSecquencingVariation j;
    j.jobSeq(p);
    return 0;
}
