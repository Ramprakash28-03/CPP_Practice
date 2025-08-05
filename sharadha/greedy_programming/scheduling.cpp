#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class jobSecquencing{
    public:

    int countjob(vector<pair<int,int>> p){
        sort(p.begin(),p.end(),[](pair<int,int> p1,pair<int,int>p2){return p1.second>p2.second/* ye hum use kiye hai decencing order me sort karne ke liye*/;});// This is called lambda function
        int ans=p[0].second,deadLine=p[0].first;
        for(int i=1;i<p.size();i++){
            if(p[i].first>deadLine){
                ans+=p[i].second;
                deadLine+=1;
            }
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    vector<pair<int,int>> p={make_pair(1,40),make_pair(1,30),make_pair(1,20),make_pair(4,20)};
    jobSecquencing J;
    cout<<"The max Profit is : "<<J.countjob(p);
    return 0;
}
